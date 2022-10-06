// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
  // Forward declaring type: EnvironmentColorManager
  class EnvironmentColorManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
  class BloomPrePassBackgroundColorsGradientFromColorSchemeColors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientFromColorSchemeColors : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element
    class Element;
    // Nested type: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor
    struct EnvironmentColor;
    public:
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    // private BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element[] _elements
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*> elements;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*>) == 0x8);
    // [InjectAttribute] Offset: 0x110D6A0
    // private readonly EnvironmentColorManager _colorManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::EnvironmentColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentColorManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& dyn__bloomPrePassBackgroundColorsGradient();
    // Get instance field reference: private BloomPrePassBackgroundColorsGradientFromColorSchemeColors/Element[] _elements
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Element*>& dyn__elements();
    // Get instance field reference: private readonly EnvironmentColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentColorManager*& dyn__colorManager();
    // public System.Void .ctor()
    // Offset: 0x13849C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientFromColorSchemeColors* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientFromColorSchemeColors*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1384CBC
    void Start();
  }; // BloomPrePassBackgroundColorsGradientFromColorSchemeColors
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors), 40 + sizeof(::GlobalNamespace::EnvironmentColorManager*)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientFromColorSchemeColorsSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::*)()>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
