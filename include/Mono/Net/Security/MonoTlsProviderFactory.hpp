// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: MonoTlsProviderFactory
  class MonoTlsProviderFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsProviderFactory*, "Mono.Net.Security", "MonoTlsProviderFactory");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MonoTlsProviderFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsProviderFactory : public ::Il2CppObject {
    public:
    // Get static field: static private System.Object locker
    static ::Il2CppObject* _get_locker();
    // Set static field: static private System.Object locker
    static void _set_locker(::Il2CppObject* value);
    // Get static field: static private System.Boolean initialized
    static bool _get_initialized();
    // Set static field: static private System.Boolean initialized
    static void _set_initialized(bool value);
    // Get static field: static private Mono.Security.Interface.MonoTlsProvider defaultProvider
    static ::Mono::Security::Interface::MonoTlsProvider* _get_defaultProvider();
    // Set static field: static private Mono.Security.Interface.MonoTlsProvider defaultProvider
    static void _set_defaultProvider(::Mono::Security::Interface::MonoTlsProvider* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Guid,System.String>> providerRegistration
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* _get_providerRegistration();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Guid,System.String>> providerRegistration
    static void _set_providerRegistration(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Guid,Mono.Security.Interface.MonoTlsProvider> providerCache
    static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>* _get_providerCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Guid,Mono.Security.Interface.MonoTlsProvider> providerCache
    static void _set_providerCache(::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>* value);
    // Get static field: static readonly System.Guid UnityTlsId
    static ::System::Guid _get_UnityTlsId();
    // Set static field: static readonly System.Guid UnityTlsId
    static void _set_UnityTlsId(::System::Guid value);
    // Get static field: static readonly System.Guid AppleTlsId
    static ::System::Guid _get_AppleTlsId();
    // Set static field: static readonly System.Guid AppleTlsId
    static void _set_AppleTlsId(::System::Guid value);
    // Get static field: static readonly System.Guid BtlsId
    static ::System::Guid _get_BtlsId();
    // Set static field: static readonly System.Guid BtlsId
    static void _set_BtlsId(::System::Guid value);
    // Get static field: static readonly System.Guid LegacyId
    static ::System::Guid _get_LegacyId();
    // Set static field: static readonly System.Guid LegacyId
    static void _set_LegacyId(::System::Guid value);
    // static private System.Void .cctor()
    // Offset: 0x1AD7D30
    static void _cctor();
    // static Mono.Security.Interface.MonoTlsProvider GetProviderInternal()
    // Offset: 0x1AD6F68
    static ::Mono::Security::Interface::MonoTlsProvider* GetProviderInternal();
    // static System.Void InitializeInternal()
    // Offset: 0x1AD7064
    static void InitializeInternal();
    // static private Mono.Security.Interface.MonoTlsProvider LookupProvider(System.String name, System.Boolean throwOnError)
    // Offset: 0x1AD7824
    static ::Mono::Security::Interface::MonoTlsProvider* LookupProvider(::StringW name, bool throwOnError);
    // static private System.Void InitializeProviderRegistration()
    // Offset: 0x1AD73C4
    static void InitializeProviderRegistration();
    // static private Mono.Security.Interface.MonoTlsProvider CreateDefaultProviderImpl()
    // Offset: 0x1AD7788
    static ::Mono::Security::Interface::MonoTlsProvider* CreateDefaultProviderImpl();
    // static Mono.Security.Interface.MonoTlsProvider GetProvider()
    // Offset: 0x1AD2DA8
    static ::Mono::Security::Interface::MonoTlsProvider* GetProvider();
  }; // Mono.Net.Security.MonoTlsProviderFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::Security::MonoTlsProviderFactory::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::GetProviderInternal
// Il2CppName: GetProviderInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)()>(&Mono::Net::Security::MonoTlsProviderFactory::GetProviderInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), "GetProviderInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::InitializeInternal
// Il2CppName: InitializeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::Security::MonoTlsProviderFactory::InitializeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), "InitializeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::LookupProvider
// Il2CppName: LookupProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)(::StringW, bool)>(&Mono::Net::Security::MonoTlsProviderFactory::LookupProvider)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), "LookupProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, throwOnError});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::InitializeProviderRegistration
// Il2CppName: InitializeProviderRegistration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::Security::MonoTlsProviderFactory::InitializeProviderRegistration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), "InitializeProviderRegistration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::CreateDefaultProviderImpl
// Il2CppName: CreateDefaultProviderImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)()>(&Mono::Net::Security::MonoTlsProviderFactory::CreateDefaultProviderImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), "CreateDefaultProviderImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MonoTlsProviderFactory::GetProvider
// Il2CppName: GetProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)()>(&Mono::Net::Security::MonoTlsProviderFactory::GetProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MonoTlsProviderFactory*), "GetProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
