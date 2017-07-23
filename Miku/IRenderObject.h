#pragma once

class GraphicsContext;

namespace Graphics
{
    enum eObjectFilter { kOpaque = 0x1, kCutout = 0x2, kTransparent = 0x4, kGroundPlane = 0x8, kAll = 0xF, kNone = 0x0 };
    class IRenderObject
    {
    public:
        virtual void Draw( GraphicsContext& gfxContext, eObjectFilter Filter ) = 0;
        virtual void Update( float deltaT ) = 0;
    };
}