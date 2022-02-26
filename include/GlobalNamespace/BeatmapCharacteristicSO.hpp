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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSO*, "", "BeatmapCharacteristicSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private UnityEngine.Sprite _icon
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0x123D1AC
    // private System.String _descriptionLocalizationKey
    // Size: 0x8
    // Offset: 0x20
    ::StringW descriptionLocalizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0x123D1E4
    // private System.String _characteristicNameLocalizationKey
    // Size: 0x8
    // Offset: 0x28
    ::StringW characteristicNameLocalizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _serializedName
    // Size: 0x8
    // Offset: 0x30
    ::StringW serializedName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _compoundIdPartName
    // Size: 0x8
    // Offset: 0x38
    ::StringW compoundIdPartName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _sortingOrder
    // Size: 0x4
    // Offset: 0x40
    int sortingOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _containsRotationEvents
    // Size: 0x1
    // Offset: 0x44
    bool containsRotationEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _requires360Movement
    // Size: 0x1
    // Offset: 0x45
    bool requires360Movement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: requires360Movement and: numberOfColors
    char __padding7[0x2] = {};
    // private System.Int32 _numberOfColors
    // Size: 0x4
    // Offset: 0x48
    int numberOfColors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Sprite _icon
    ::UnityEngine::Sprite*& dyn__icon();
    // Get instance field reference: private System.String _descriptionLocalizationKey
    ::StringW& dyn__descriptionLocalizationKey();
    // Get instance field reference: private System.String _characteristicNameLocalizationKey
    ::StringW& dyn__characteristicNameLocalizationKey();
    // Get instance field reference: private System.String _serializedName
    ::StringW& dyn__serializedName();
    // Get instance field reference: private System.String _compoundIdPartName
    ::StringW& dyn__compoundIdPartName();
    // Get instance field reference: private System.Int32 _sortingOrder
    int& dyn__sortingOrder();
    // Get instance field reference: private System.Boolean _containsRotationEvents
    bool& dyn__containsRotationEvents();
    // Get instance field reference: private System.Boolean _requires360Movement
    bool& dyn__requires360Movement();
    // Get instance field reference: private System.Int32 _numberOfColors
    int& dyn__numberOfColors();
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x2B4344C
    ::UnityEngine::Sprite* get_icon();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0x2B43454
    ::StringW get_descriptionLocalizationKey();
    // public System.String get_characteristicNameLocalizationKey()
    // Offset: 0x2B4345C
    ::StringW get_characteristicNameLocalizationKey();
    // public System.String get_serializedName()
    // Offset: 0x2B43464
    ::StringW get_serializedName();
    // public System.String get_compoundIdPartName()
    // Offset: 0x2B4346C
    ::StringW get_compoundIdPartName();
    // public System.Int32 get_sortingOrder()
    // Offset: 0x2B43474
    int get_sortingOrder();
    // public System.Boolean get_containsRotationEvents()
    // Offset: 0x2B4347C
    bool get_containsRotationEvents();
    // public System.Boolean get_requires360Movement()
    // Offset: 0x2B43484
    bool get_requires360Movement();
    // public System.Int32 get_numberOfColors()
    // Offset: 0x2B4348C
    int get_numberOfColors();
    // public System.Void .ctor()
    // Offset: 0x2B43494
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicSO*, creationType>()));
    }
  }; // BeatmapCharacteristicSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicSO), 72 + sizeof(int)> __GlobalNamespace_BeatmapCharacteristicSOSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicSO) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_icon
// Il2CppName: get_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_icon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_descriptionLocalizationKey
// Il2CppName: get_descriptionLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_descriptionLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_descriptionLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_characteristicNameLocalizationKey
// Il2CppName: get_characteristicNameLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_characteristicNameLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_characteristicNameLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_serializedName
// Il2CppName: get_serializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_serializedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_serializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_compoundIdPartName
// Il2CppName: get_compoundIdPartName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_compoundIdPartName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_compoundIdPartName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_sortingOrder
// Il2CppName: get_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_sortingOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_containsRotationEvents
// Il2CppName: get_containsRotationEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_containsRotationEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_containsRotationEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_requires360Movement
// Il2CppName: get_requires360Movement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_requires360Movement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_requires360Movement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::get_numberOfColors
// Il2CppName: get_numberOfColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapCharacteristicSO::*)()>(&GlobalNamespace::BeatmapCharacteristicSO::get_numberOfColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSO*), "get_numberOfColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
