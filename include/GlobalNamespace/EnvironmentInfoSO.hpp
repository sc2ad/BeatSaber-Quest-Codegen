// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: EnvironmentSizeData
  class EnvironmentSizeData;
  // Forward declaring type: EnvironmentIntensityReductionOptions
  class EnvironmentIntensityReductionOptions;
  // Forward declaring type: EnvironmentLightGroups
  class EnvironmentLightGroups;
  // Forward declaring type: DefaultEnvironmentEvents
  class DefaultEnvironmentEvents;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentInfoSO
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private System.String _environmentName
    // Size: 0x8
    // Offset: 0x18
    ::StringW environmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private ColorSchemeSO _colorScheme
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ColorSchemeSO* colorScheme;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeSO*) == 0x8);
    // private SceneInfo _sceneInfo
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SceneInfo* sceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneInfo*) == 0x8);
    // private System.String _serializedName
    // Size: 0x8
    // Offset: 0x30
    ::StringW serializedName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private EnvironmentTypeSO _environmentType
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::EnvironmentTypeSO* environmentType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentTypeSO*) == 0x8);
    // private EnvironmentSizeData _environmentSizeData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::EnvironmentSizeData* environmentSizeData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentSizeData*) == 0x8);
    // private EnvironmentIntensityReductionOptions _environmentIntensityReductionOptions
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentIntensityReductionOptions*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> _environmentKeywords
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::StringW>* environmentKeywords;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private EnvironmentLightGroups _lightGroups
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::EnvironmentLightGroups* lightGroups;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentLightGroups*) == 0x8);
    // private DefaultEnvironmentEvents _defaultEnvironmentEvents
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DefaultEnvironmentEvents*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _environmentName
    ::StringW& dyn__environmentName();
    // Get instance field reference: private ColorSchemeSO _colorScheme
    ::GlobalNamespace::ColorSchemeSO*& dyn__colorScheme();
    // Get instance field reference: private SceneInfo _sceneInfo
    ::GlobalNamespace::SceneInfo*& dyn__sceneInfo();
    // Get instance field reference: private System.String _serializedName
    ::StringW& dyn__serializedName();
    // Get instance field reference: private EnvironmentTypeSO _environmentType
    ::GlobalNamespace::EnvironmentTypeSO*& dyn__environmentType();
    // Get instance field reference: private EnvironmentSizeData _environmentSizeData
    ::GlobalNamespace::EnvironmentSizeData*& dyn__environmentSizeData();
    // Get instance field reference: private EnvironmentIntensityReductionOptions _environmentIntensityReductionOptions
    ::GlobalNamespace::EnvironmentIntensityReductionOptions*& dyn__environmentIntensityReductionOptions();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _environmentKeywords
    ::System::Collections::Generic::List_1<::StringW>*& dyn__environmentKeywords();
    // Get instance field reference: private EnvironmentLightGroups _lightGroups
    ::GlobalNamespace::EnvironmentLightGroups*& dyn__lightGroups();
    // Get instance field reference: private DefaultEnvironmentEvents _defaultEnvironmentEvents
    ::GlobalNamespace::DefaultEnvironmentEvents*& dyn__defaultEnvironmentEvents();
    // public SceneInfo get_sceneInfo()
    // Offset: 0x1383B2C
    ::GlobalNamespace::SceneInfo* get_sceneInfo();
    // public System.String get_environmentName()
    // Offset: 0x1383B34
    ::StringW get_environmentName();
    // public ColorSchemeSO get_colorScheme()
    // Offset: 0x1383B3C
    ::GlobalNamespace::ColorSchemeSO* get_colorScheme();
    // public System.String get_serializedName()
    // Offset: 0x1383B44
    ::StringW get_serializedName();
    // public EnvironmentTypeSO get_environmentType()
    // Offset: 0x1383B4C
    ::GlobalNamespace::EnvironmentTypeSO* get_environmentType();
    // public EnvironmentSizeData get_environmentSizeData()
    // Offset: 0x1383B54
    ::GlobalNamespace::EnvironmentSizeData* get_environmentSizeData();
    // public EnvironmentIntensityReductionOptions get_environmentIntensityReductionOptions()
    // Offset: 0x1383B5C
    ::GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions();
    // public System.Collections.Generic.IReadOnlyList`1<System.String> get_environmentKeywords()
    // Offset: 0x1383B64
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();
    // public EnvironmentLightGroups get_lightGroups()
    // Offset: 0x1383B6C
    ::GlobalNamespace::EnvironmentLightGroups* get_lightGroups();
    // public DefaultEnvironmentEvents get_defaultEnvironmentEvents()
    // Offset: 0x1383B74
    ::GlobalNamespace::DefaultEnvironmentEvents* get_defaultEnvironmentEvents();
    // public System.Void .ctor()
    // Offset: 0x1383B7C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentInfoSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentInfoSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentInfoSO*, creationType>()));
    }
  }; // EnvironmentInfoSO
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentInfoSO), 96 + sizeof(::GlobalNamespace::DefaultEnvironmentEvents*)> __GlobalNamespace_EnvironmentInfoSOSizeCheck;
  static_assert(sizeof(EnvironmentInfoSO) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_sceneInfo
// Il2CppName: get_sceneInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SceneInfo* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_sceneInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_sceneInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentName
// Il2CppName: get_environmentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorSchemeSO* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_colorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_serializedName
// Il2CppName: get_serializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_serializedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_serializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentType
// Il2CppName: get_environmentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentTypeSO* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData
// Il2CppName: get_environmentSizeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentSizeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentSizeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions
// Il2CppName: get_environmentIntensityReductionOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentIntensityReductionOptions* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentIntensityReductionOptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentIntensityReductionOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords
// Il2CppName: get_environmentKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_environmentKeywords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_environmentKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_lightGroups
// Il2CppName: get_lightGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentLightGroups* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_lightGroups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_lightGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::get_defaultEnvironmentEvents
// Il2CppName: get_defaultEnvironmentEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents* (GlobalNamespace::EnvironmentInfoSO::*)()>(&GlobalNamespace::EnvironmentInfoSO::get_defaultEnvironmentEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentInfoSO*), "get_defaultEnvironmentEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentInfoSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
