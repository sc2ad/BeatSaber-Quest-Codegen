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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CreditsContent
  class CreditsContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreditsContent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsContent*, "", "CreditsContent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: CreditsContent
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsContent : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.GameObject _normalTextPrefab
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* normalTextPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _normalLocalizedTextPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* normalLocalizedTextPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _titleTextPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* titleTextPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _titleLocalizedTextPrefab
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* titleLocalizedTextPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _headerTextPrefab
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* headerTextPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _headerLocalizedTextPrefab
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* headerLocalizedTextPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Int32 _columnCount
    // Size: 0x4
    // Offset: 0x48
    int columnCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _spaceHeight
    // Size: 0x4
    // Offset: 0x4C
    float spaceHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _titleHeight
    // Size: 0x4
    // Offset: 0x50
    float titleHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: titleHeight and: contentRoot
    char __padding8[0x4] = {};
    // [SpaceAttribute] Offset: 0x1258B74
    // private UnityEngine.Transform _contentRoot
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* contentRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0x1258BAC
    // private UnityEngine.RectTransform _rootRectTransform
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::RectTransform* rootRectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.TextAsset _creditsContentTextAsset
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::TextAsset* creditsContentTextAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _normalTextPrefab
    ::UnityEngine::GameObject*& dyn__normalTextPrefab();
    // Get instance field reference: private UnityEngine.GameObject _normalLocalizedTextPrefab
    ::UnityEngine::GameObject*& dyn__normalLocalizedTextPrefab();
    // Get instance field reference: private UnityEngine.GameObject _titleTextPrefab
    ::UnityEngine::GameObject*& dyn__titleTextPrefab();
    // Get instance field reference: private UnityEngine.GameObject _titleLocalizedTextPrefab
    ::UnityEngine::GameObject*& dyn__titleLocalizedTextPrefab();
    // Get instance field reference: private UnityEngine.GameObject _headerTextPrefab
    ::UnityEngine::GameObject*& dyn__headerTextPrefab();
    // Get instance field reference: private UnityEngine.GameObject _headerLocalizedTextPrefab
    ::UnityEngine::GameObject*& dyn__headerLocalizedTextPrefab();
    // Get instance field reference: private System.Int32 _columnCount
    int& dyn__columnCount();
    // Get instance field reference: private System.Single _spaceHeight
    float& dyn__spaceHeight();
    // Get instance field reference: private System.Single _titleHeight
    float& dyn__titleHeight();
    // Get instance field reference: private UnityEngine.Transform _contentRoot
    ::UnityEngine::Transform*& dyn__contentRoot();
    // Get instance field reference: private UnityEngine.RectTransform _rootRectTransform
    ::UnityEngine::RectTransform*& dyn__rootRectTransform();
    // Get instance field reference: private UnityEngine.TextAsset _creditsContentTextAsset
    ::UnityEngine::TextAsset*& dyn__creditsContentTextAsset();
    // public UnityEngine.GameObject get_normalTextPrefab()
    // Offset: 0x1407594
    ::UnityEngine::GameObject* get_normalTextPrefab();
    // public UnityEngine.GameObject get_normalLocalizedTextPrefab()
    // Offset: 0x140759C
    ::UnityEngine::GameObject* get_normalLocalizedTextPrefab();
    // public UnityEngine.GameObject get_titleTextPrefab()
    // Offset: 0x14075A4
    ::UnityEngine::GameObject* get_titleTextPrefab();
    // public UnityEngine.GameObject get_titleLocalizedTextPrefab()
    // Offset: 0x14075AC
    ::UnityEngine::GameObject* get_titleLocalizedTextPrefab();
    // public UnityEngine.GameObject get_headerTextPrefab()
    // Offset: 0x14075B4
    ::UnityEngine::GameObject* get_headerTextPrefab();
    // public UnityEngine.GameObject get_headerLocalizedTextPrefab()
    // Offset: 0x14075BC
    ::UnityEngine::GameObject* get_headerLocalizedTextPrefab();
    // public System.Int32 get_columnCount()
    // Offset: 0x14075C4
    int get_columnCount();
    // public System.Single get_spaceHeight()
    // Offset: 0x14075CC
    float get_spaceHeight();
    // public System.Single get_titleHeight()
    // Offset: 0x14075D4
    float get_titleHeight();
    // public UnityEngine.Transform get_contentRoot()
    // Offset: 0x14075DC
    ::UnityEngine::Transform* get_contentRoot();
    // public UnityEngine.RectTransform get_rootRectTransform()
    // Offset: 0x14075E4
    ::UnityEngine::RectTransform* get_rootRectTransform();
    // public UnityEngine.TextAsset get_creditsContentTextAsset()
    // Offset: 0x14075EC
    ::UnityEngine::TextAsset* get_creditsContentTextAsset();
    // public System.Void .ctor()
    // Offset: 0x14075F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreditsContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsContent*, creationType>()));
    }
  }; // CreditsContent
  #pragma pack(pop)
  static check_size<sizeof(CreditsContent), 104 + sizeof(::UnityEngine::TextAsset*)> __GlobalNamespace_CreditsContentSizeCheck;
  static_assert(sizeof(CreditsContent) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_normalTextPrefab
// Il2CppName: get_normalTextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_normalTextPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_normalTextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_normalLocalizedTextPrefab
// Il2CppName: get_normalLocalizedTextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_normalLocalizedTextPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_normalLocalizedTextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_titleTextPrefab
// Il2CppName: get_titleTextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_titleTextPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_titleTextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_titleLocalizedTextPrefab
// Il2CppName: get_titleLocalizedTextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_titleLocalizedTextPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_titleLocalizedTextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_headerTextPrefab
// Il2CppName: get_headerTextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_headerTextPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_headerTextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_headerLocalizedTextPrefab
// Il2CppName: get_headerLocalizedTextPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_headerLocalizedTextPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_headerLocalizedTextPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_columnCount
// Il2CppName: get_columnCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_columnCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_columnCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_spaceHeight
// Il2CppName: get_spaceHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_spaceHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_spaceHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_titleHeight
// Il2CppName: get_titleHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_titleHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_titleHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_contentRoot
// Il2CppName: get_contentRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_contentRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_contentRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_rootRectTransform
// Il2CppName: get_rootRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_rootRectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_rootRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::get_creditsContentTextAsset
// Il2CppName: get_creditsContentTextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (GlobalNamespace::CreditsContent::*)()>(&GlobalNamespace::CreditsContent::get_creditsContentTextAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsContent*), "get_creditsContentTextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
