// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HeaderVariantInfo
#include "System/Net/HeaderVariantInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: PathList
  class PathList;
  // Forward declaring type: Cookie
  class Cookie;
  // Forward declaring type: CookieCollection
  class CookieCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CookieContainer
  class CookieContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CookieContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieContainer*, "System.Net", "CookieContainer");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class CookieContainer : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Hashtable m_domainTable
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* m_domainTable;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Int32 m_maxCookieSize
    // Size: 0x4
    // Offset: 0x18
    int m_maxCookieSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_maxCookies
    // Size: 0x4
    // Offset: 0x1C
    int m_maxCookies;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_maxCookiesPerDomain
    // Size: 0x4
    // Offset: 0x20
    int m_maxCookiesPerDomain;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x24
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_fqdnMyDomain
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_fqdnMyDomain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private readonly System.Net.HeaderVariantInfo[] HeaderInfo
    static ::ArrayW<::System::Net::HeaderVariantInfo> _get_HeaderInfo();
    // Set static field: static private readonly System.Net.HeaderVariantInfo[] HeaderInfo
    static void _set_HeaderInfo(::ArrayW<::System::Net::HeaderVariantInfo> value);
    // Get instance field reference: private System.Collections.Hashtable m_domainTable
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_m_domainTable();
    // Get instance field reference: private System.Int32 m_maxCookieSize
    [[deprecated("Use field access instead!")]] int& dyn_m_maxCookieSize();
    // Get instance field reference: private System.Int32 m_maxCookies
    [[deprecated("Use field access instead!")]] int& dyn_m_maxCookies();
    // Get instance field reference: private System.Int32 m_maxCookiesPerDomain
    [[deprecated("Use field access instead!")]] int& dyn_m_maxCookiesPerDomain();
    // Get instance field reference: private System.Int32 m_count
    [[deprecated("Use field access instead!")]] int& dyn_m_count();
    // Get instance field reference: private System.String m_fqdnMyDomain
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_fqdnMyDomain();
    // public System.Void .ctor()
    // Offset: 0x1A7007C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CookieContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieContainer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A73CF4
    static void _cctor();
    // private System.Void AddRemoveDomain(System.String key, System.Net.PathList value)
    // Offset: 0x1A7015C
    void AddRemoveDomain(::StringW key, ::System::Net::PathList* value);
    // System.Void Add(System.Net.Cookie cookie, System.Boolean throwOnError)
    // Offset: 0x1A70258
    void Add(::System::Net::Cookie* cookie, bool throwOnError);
    // private System.Boolean AgeCookies(System.String domain)
    // Offset: 0x1A709C8
    bool AgeCookies(::StringW domain);
    // private System.Int32 ExpireCollection(System.Net.CookieCollection cc)
    // Offset: 0x1A71CFC
    int ExpireCollection(::System::Net::CookieCollection* cc);
    // System.Boolean IsLocalDomain(System.String host)
    // Offset: 0x1A71E34
    bool IsLocalDomain(::StringW host);
    // System.Net.CookieCollection CookieCutter(System.Uri uri, System.String headerName, System.String setCookieHeader, System.Boolean isThrow)
    // Offset: 0x1A720FC
    ::System::Net::CookieCollection* CookieCutter(::System::Uri* uri, ::StringW headerName, ::StringW setCookieHeader, bool isThrow);
    // System.Net.CookieCollection InternalGetCookies(System.Uri uri)
    // Offset: 0x1A72D60
    ::System::Net::CookieCollection* InternalGetCookies(::System::Uri* uri);
    // private System.Void BuildCookieCollectionFromDomainMatches(System.Uri uri, System.Boolean isSecure, System.Int32 port, System.Net.CookieCollection cookies, System.Collections.Generic.List`1<System.String> domainAttribute, System.Boolean matchOnlyPlainCookie)
    // Offset: 0x1A73048
    void BuildCookieCollectionFromDomainMatches(::System::Uri* uri, bool isSecure, int port, ::System::Net::CookieCollection* cookies, ::System::Collections::Generic::List_1<::StringW>* domainAttribute, bool matchOnlyPlainCookie);
    // private System.Void MergeUpdateCollections(System.Net.CookieCollection destination, System.Net.CookieCollection source, System.Int32 port, System.Boolean isSecure, System.Boolean isPlainOnly)
    // Offset: 0x1A7374C
    void MergeUpdateCollections(::System::Net::CookieCollection* destination, ::System::Net::CookieCollection* source, int port, bool isSecure, bool isPlainOnly);
    // public System.String GetCookieHeader(System.Uri uri)
    // Offset: 0x1A73934
    ::StringW GetCookieHeader(::System::Uri* uri);
    // System.String GetCookieHeader(System.Uri uri, out System.String optCookie2)
    // Offset: 0x1A73A04
    ::StringW GetCookieHeader(::System::Uri* uri, ByRef<::StringW> optCookie2);
  }; // System.Net.CookieContainer
  #pragma pack(pop)
  static check_size<sizeof(CookieContainer), 40 + sizeof(::StringW)> __System_Net_CookieContainerSizeCheck;
  static_assert(sizeof(CookieContainer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CookieContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CookieContainer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::CookieContainer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::AddRemoveDomain
// Il2CppName: AddRemoveDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieContainer::*)(::StringW, ::System::Net::PathList*)>(&System::Net::CookieContainer::AddRemoveDomain)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "PathList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "AddRemoveDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieContainer::*)(::System::Net::Cookie*, bool)>(&System::Net::CookieContainer::Add)> {
  static const MethodInfo* get() {
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System.Net", "Cookie")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie, throwOnError});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::AgeCookies
// Il2CppName: AgeCookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieContainer::*)(::StringW)>(&System::Net::CookieContainer::AgeCookies)> {
  static const MethodInfo* get() {
    static auto* domain = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "AgeCookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{domain});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::ExpireCollection
// Il2CppName: ExpireCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::CookieContainer::*)(::System::Net::CookieCollection*)>(&System::Net::CookieContainer::ExpireCollection)> {
  static const MethodInfo* get() {
    static auto* cc = &::il2cpp_utils::GetClassFromName("System.Net", "CookieCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "ExpireCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cc});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::IsLocalDomain
// Il2CppName: IsLocalDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieContainer::*)(::StringW)>(&System::Net::CookieContainer::IsLocalDomain)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "IsLocalDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::CookieCutter
// Il2CppName: CookieCutter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieCollection* (System::Net::CookieContainer::*)(::System::Uri*, ::StringW, ::StringW, bool)>(&System::Net::CookieContainer::CookieCutter)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* headerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setCookieHeader = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isThrow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "CookieCutter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, headerName, setCookieHeader, isThrow});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::InternalGetCookies
// Il2CppName: InternalGetCookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieCollection* (System::Net::CookieContainer::*)(::System::Uri*)>(&System::Net::CookieContainer::InternalGetCookies)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "InternalGetCookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches
// Il2CppName: BuildCookieCollectionFromDomainMatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieContainer::*)(::System::Uri*, bool, int, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::StringW>*, bool)>(&System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* isSecure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookies = &::il2cpp_utils::GetClassFromName("System.Net", "CookieCollection")->byval_arg;
    static auto* domainAttribute = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* matchOnlyPlainCookie = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "BuildCookieCollectionFromDomainMatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, isSecure, port, cookies, domainAttribute, matchOnlyPlainCookie});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::MergeUpdateCollections
// Il2CppName: MergeUpdateCollections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieContainer::*)(::System::Net::CookieCollection*, ::System::Net::CookieCollection*, int, bool, bool)>(&System::Net::CookieContainer::MergeUpdateCollections)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.Net", "CookieCollection")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Net", "CookieCollection")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSecure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isPlainOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "MergeUpdateCollections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, source, port, isSecure, isPlainOnly});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::GetCookieHeader
// Il2CppName: GetCookieHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::CookieContainer::*)(::System::Uri*)>(&System::Net::CookieContainer::GetCookieHeader)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "GetCookieHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::CookieContainer::GetCookieHeader
// Il2CppName: GetCookieHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::CookieContainer::*)(::System::Uri*, ByRef<::StringW>)>(&System::Net::CookieContainer::GetCookieHeader)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* optCookie2 = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieContainer*), "GetCookieHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, optCookie2});
  }
};
