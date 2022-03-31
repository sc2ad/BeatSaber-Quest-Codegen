// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.Glyph
#include "UnityEngine/TextCore/Glyph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteGlyph
  class TMP_SpriteGlyph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_SpriteGlyph);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteGlyph*, "TMPro", "TMP_SpriteGlyph");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteGlyph
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_SpriteGlyph : public ::UnityEngine::TextCore::Glyph {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Sprite sprite
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Sprite* sprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Sprite*
    constexpr operator ::UnityEngine::Sprite*() const noexcept {
      return sprite;
    }
    // Get instance field reference: public UnityEngine.Sprite sprite
    ::UnityEngine::Sprite*& dyn_sprite();
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex, UnityEngine.Sprite sprite)
    // Offset: 0x1454C50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteGlyph* New_ctor(uint index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex, ::UnityEngine::Sprite* sprite) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SpriteGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteGlyph*, creationType>(index, metrics, glyphRect, scale, atlasIndex, sprite)));
    }
    // public System.Void .ctor()
    // Offset: 0x1454920
    // Implemented from: UnityEngine.TextCore.Glyph
    // Base method: System.Void Glyph::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteGlyph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SpriteGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteGlyph*, creationType>()));
    }
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    // Offset: 0x1454B90
    // Implemented from: UnityEngine.TextCore.Glyph
    // Base method: System.Void Glyph::.ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteGlyph* New_ctor(uint index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SpriteGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteGlyph*, creationType>(index, metrics, glyphRect, scale, atlasIndex)));
    }
  }; // TMPro.TMP_SpriteGlyph
  #pragma pack(pop)
  static check_size<sizeof(TMP_SpriteGlyph), 64 + sizeof(::UnityEngine::Sprite*)> __TMPro_TMP_SpriteGlyphSizeCheck;
  static_assert(sizeof(TMP_SpriteGlyph) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SpriteGlyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_SpriteGlyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_SpriteGlyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
