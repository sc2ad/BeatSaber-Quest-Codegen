// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::$$c*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c <>9
    static ::UnityEngine::AddressableAssets::AddressablesImpl::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c <>9
    static void _set_$$9(::UnityEngine::AddressableAssets::AddressablesImpl::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo,UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> <>9__51_0
    static ::System::Func_2<::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* _get_$$9__51_0();
    // Set static field: static public System.Func`2<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo,UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> <>9__51_0
    static void _set_$$9__51_0(::System::Func_2<::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* value);
    // Get static field: static public System.Func`2<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo,System.Boolean> <>9__123_0
    static ::System::Func_2<::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, bool>* _get_$$9__123_0();
    // Set static field: static public System.Func`2<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo,System.Boolean> <>9__123_0
    static void _set_$$9__123_0(::System::Func_2<::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, bool>* value);
    // Get static field: static public System.Func`2<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo,System.String> <>9__123_1
    static ::System::Func_2<::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, ::StringW>* _get_$$9__123_1();
    // Set static field: static public System.Func`2<UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo,System.String> <>9__123_1
    static void _set_$$9__123_1(::System::Func_2<::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x18AF8C8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18AF92C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c*, creationType>()));
    }
    // UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator <get_ResourceLocators>b__51_0(UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo l)
    // Offset: 0x18AF934
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* $get_ResourceLocators$b__51_0(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo* l);
    // System.Boolean <get_CatalogsWithAvailableUpdates>b__123_0(UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo s)
    // Offset: 0x18AF94C
    bool $get_CatalogsWithAvailableUpdates$b__123_0(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo* s);
    // System.String <get_CatalogsWithAvailableUpdates>b__123_1(UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.ResourceLocatorInfo s)
    // Offset: 0x18AF964
    ::StringW $get_CatalogsWithAvailableUpdates$b__123_1(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo* s);
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c::$get_ResourceLocators$b__51_0
// Il2CppName: <get_ResourceLocators>b__51_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* (UnityEngine::AddressableAssets::AddressablesImpl::$$c::*)(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c::$get_ResourceLocators$b__51_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c*), "<get_ResourceLocators>b__51_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c::$get_CatalogsWithAvailableUpdates$b__123_0
// Il2CppName: <get_CatalogsWithAvailableUpdates>b__123_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::$$c::*)(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c::$get_CatalogsWithAvailableUpdates$b__123_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c*), "<get_CatalogsWithAvailableUpdates>b__123_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c::$get_CatalogsWithAvailableUpdates$b__123_1
// Il2CppName: <get_CatalogsWithAvailableUpdates>b__123_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AddressablesImpl::$$c::*)(::UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c::$get_CatalogsWithAvailableUpdates$b__123_1)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl/ResourceLocatorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c*), "<get_CatalogsWithAvailableUpdates>b__123_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
