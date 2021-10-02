// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MirrorRendererGraphicsSettingsPresets
  // [TokenAttribute] Offset: FFFFFFFF
  class MirrorRendererGraphicsSettingsPresets : public GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset
    class Preset;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private MirrorRendererGraphicsSettingsPresets/Preset[] _presets
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*> presets;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*>) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MirrorRendererGraphicsSettingsPresets/Preset[] _presets
    ::ArrayW<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*>& dyn__presets();
    // public MirrorRendererGraphicsSettingsPresets/Preset[] get_presets()
    // Offset: 0x11827C4
    ::ArrayW<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*> get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0x11827CC
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::ArrayW<GlobalNamespace::NamedPreset*> get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0x11827D4
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirrorRendererGraphicsSettingsPresets* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirrorRendererGraphicsSettingsPresets::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirrorRendererGraphicsSettingsPresets*, creationType>()));
    }
  }; // MirrorRendererGraphicsSettingsPresets
  #pragma pack(pop)
  static check_size<sizeof(MirrorRendererGraphicsSettingsPresets), 24 + sizeof(::ArrayW<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*>)> __GlobalNamespace_MirrorRendererGraphicsSettingsPresetsSizeCheck;
  static_assert(sizeof(MirrorRendererGraphicsSettingsPresets) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, "", "MirrorRendererGraphicsSettingsPresets");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets
// Il2CppName: get_presets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*> (GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererGraphicsSettingsPresets*), "get_presets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets
// Il2CppName: get_namedPresets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::NamedPreset*> (GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirrorRendererGraphicsSettingsPresets*), "get_namedPresets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirrorRendererGraphicsSettingsPresets::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
