// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ColorSO
#include "GlobalNamespace/ColorSO.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultipliedAndAddedColorSO
  class MultipliedAndAddedColorSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultipliedAndAddedColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultipliedAndAddedColorSO*, "", "MultipliedAndAddedColorSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultipliedAndAddedColorSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultipliedAndAddedColorSO : public ::GlobalNamespace::ColorSO {
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
    // private SimpleColorSO _baseColor
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SimpleColorSO* baseColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleColorSO*) == 0x8);
    // private UnityEngine.Color _multiplierColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color multiplierColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _addColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color addColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SimpleColorSO _baseColor
    ::GlobalNamespace::SimpleColorSO*& dyn__baseColor();
    // Get instance field reference: private UnityEngine.Color _multiplierColor
    ::UnityEngine::Color& dyn__multiplierColor();
    // Get instance field reference: private UnityEngine.Color _addColor
    ::UnityEngine::Color& dyn__addColor();
    // public override UnityEngine.Color get_color()
    // Offset: 0x2A9836C
    // Implemented from: ColorSO
    // Base method: UnityEngine.Color ColorSO::get_color()
    ::UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x2A983EC
    // Implemented from: ColorSO
    // Base method: System.Void ColorSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultipliedAndAddedColorSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultipliedAndAddedColorSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultipliedAndAddedColorSO*, creationType>()));
    }
  }; // MultipliedAndAddedColorSO
  #pragma pack(pop)
  static check_size<sizeof(MultipliedAndAddedColorSO), 48 + sizeof(::UnityEngine::Color)> __GlobalNamespace_MultipliedAndAddedColorSOSizeCheck;
  static_assert(sizeof(MultipliedAndAddedColorSO) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultipliedAndAddedColorSO::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MultipliedAndAddedColorSO::*)()>(&GlobalNamespace::MultipliedAndAddedColorSO::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultipliedAndAddedColorSO*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultipliedAndAddedColorSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
