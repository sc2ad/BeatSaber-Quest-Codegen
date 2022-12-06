// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: CachedProvider
  class CachedProvider;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: CachedOpenTypeProvider
  class CachedOpenTypeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::CachedOpenTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CachedOpenTypeProvider*, "Zenject", "CachedOpenTypeProvider");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.CachedOpenTypeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class CachedOpenTypeProvider : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    // Nested type: ::Zenject::CachedOpenTypeProvider::$$c
    class $$c;
    public:
    // private readonly Zenject.IProvider _creator
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::IProvider* creator;
    // Field size check
    static_assert(sizeof(::Zenject::IProvider*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Type,Zenject.CachedProvider> _providerMap
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* providerMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating interface conversion operator: i_IProvider
    inline ::Zenject::IProvider* i_IProvider() noexcept {
      return reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly Zenject.IProvider _creator
    [[deprecated("Use field access instead!")]] ::Zenject::IProvider*& dyn__creator();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Type,Zenject.CachedProvider> _providerMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*& dyn__providerMap();
    // public System.Boolean get_IsCached()
    // Offset: 0x17B6F68
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x17B6F70
    bool get_TypeVariesBasedOnMemberType();
    // public System.Int32 get_NumInstances()
    // Offset: 0x17B6FB4
    int get_NumInstances();
    // public System.Void .ctor(Zenject.IProvider creator)
    // Offset: 0x17B6E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedOpenTypeProvider* New_ctor(::Zenject::IProvider* creator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::CachedOpenTypeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedOpenTypeProvider*, creationType>(creator)));
    }
    // public System.Void ClearCache()
    // Offset: 0x17B70D0
    void ClearCache();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x17B7128
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x17B71EC
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.CachedOpenTypeProvider
  #pragma pack(pop)
  static check_size<sizeof(CachedOpenTypeProvider), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*)> __Zenject_CachedOpenTypeProviderSizeCheck;
  static_assert(sizeof(CachedOpenTypeProvider) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::CachedOpenTypeProvider::*)()>(&Zenject::CachedOpenTypeProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::CachedOpenTypeProvider::*)()>(&Zenject::CachedOpenTypeProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::get_NumInstances
// Il2CppName: get_NumInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::CachedOpenTypeProvider::*)()>(&Zenject::CachedOpenTypeProvider::get_NumInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider*), "get_NumInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::ClearCache
// Il2CppName: ClearCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::CachedOpenTypeProvider::*)()>(&Zenject::CachedOpenTypeProvider::ClearCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider*), "ClearCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::CachedOpenTypeProvider::*)(::Zenject::InjectContext*)>(&Zenject::CachedOpenTypeProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::CachedOpenTypeProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::CachedOpenTypeProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
