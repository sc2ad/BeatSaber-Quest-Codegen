#pragma once
#include "Zenject/Internal/zzzz__ZenPools_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Zenject::Internal::ZenPools.SpawnStatement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindStatement (*)()>(&Zenject::Internal::ZenPools::SpawnStatement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2da9d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnStatement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.DespawnStatement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::BindStatement)>(&Zenject::Internal::ZenPools::DespawnStatement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2da9e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnStatement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.SpawnBindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindInfo (*)()>(&Zenject::Internal::ZenPools::SpawnBindInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2da9ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.DespawnBindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::BindInfo)>(&Zenject::Internal::ZenPools::DespawnBindInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2da9f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.SpawnLookupId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Internal::LookupId (*)(Zenject::IProvider, Zenject::BindingId)>(&Zenject::Internal::ZenPools::SpawnLookupId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2da9fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnLookupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindingId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.DespawnLookupId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::Internal::LookupId)>(&Zenject::Internal::ZenPools::DespawnLookupId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2daa048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnLookupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Internal::LookupId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.SpawnInjectContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext (*)(Zenject::DiContainer, System::Type)>(&Zenject::Internal::ZenPools::SpawnInjectContext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2daa0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnInjectContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.DespawnInjectContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::InjectContext)>(&Zenject::Internal::ZenPools::DespawnInjectContext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2daa170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnInjectContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::ZenPools.SpawnInjectContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext (*)(Zenject::DiContainer, Zenject::InjectableInfo, Zenject::InjectContext, ::bs_hook::Il2CppWrapperType, System::Type, ::bs_hook::Il2CppWrapperType)>(&Zenject::Internal::ZenPools::SpawnInjectContext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2daa200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnInjectContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Internal::ZenPools::__set__contextPool(Zenject::StaticMemoryPool_1<Zenject::InjectContext> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_1<Zenject::InjectContext>, "_contextPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>(std::forward<Zenject::StaticMemoryPool_1<Zenject::InjectContext>>(value));
}
 Zenject::StaticMemoryPool_1<Zenject::InjectContext> Zenject::Internal::ZenPools::__get__contextPool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_1<Zenject::InjectContext>, "_contextPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>();
}
 void Zenject::Internal::ZenPools::__set__lookupIdPool(Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId>, "_lookupIdPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>(std::forward<Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId>>(value));
}
 Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId> Zenject::Internal::ZenPools::__get__lookupIdPool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId>, "_lookupIdPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>();
}
 void Zenject::Internal::ZenPools::__set__bindInfoPool(Zenject::StaticMemoryPool_1<Zenject::BindInfo> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_1<Zenject::BindInfo>, "_bindInfoPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>(std::forward<Zenject::StaticMemoryPool_1<Zenject::BindInfo>>(value));
}
 Zenject::StaticMemoryPool_1<Zenject::BindInfo> Zenject::Internal::ZenPools::__get__bindInfoPool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_1<Zenject::BindInfo>, "_bindInfoPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>();
}
 void Zenject::Internal::ZenPools::__set__bindStatementPool(Zenject::StaticMemoryPool_1<Zenject::BindStatement> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_1<Zenject::BindStatement>, "_bindStatementPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>(std::forward<Zenject::StaticMemoryPool_1<Zenject::BindStatement>>(value));
}
 Zenject::StaticMemoryPool_1<Zenject::BindStatement> Zenject::Internal::ZenPools::__get__bindStatementPool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_1<Zenject::BindStatement>, "_bindStatementPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get>();
}
template<typename T>
 System::Collections::Generic::HashSet_1<T> Zenject::Internal::ZenPools::SpawnHashSet()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "SpawnHashSet",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<T>, false>(nullptr, ___internal_method);
}
template<typename TKey,typename TValue>
 System::Collections::Generic::Dictionary_2<TKey,TValue> Zenject::Internal::ZenPools::SpawnDictionary()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "SpawnDictionary",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<TKey,TValue>, false>(nullptr, ___internal_method);
}
 Zenject::BindStatement Zenject::Internal::ZenPools::SpawnStatement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnStatement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::BindStatement, false>(nullptr, ___internal_method);
}
 void Zenject::Internal::ZenPools::DespawnStatement(Zenject::BindStatement statement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnStatement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement);
}
 Zenject::BindInfo Zenject::Internal::ZenPools::SpawnBindInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::BindInfo, false>(nullptr, ___internal_method);
}
 void Zenject::Internal::ZenPools::DespawnBindInfo(Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnBindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bindInfo);
}
template<typename TKey,typename TValue>
 void Zenject::Internal::ZenPools::DespawnDictionary(System::Collections::Generic::Dictionary_2<TKey,TValue> dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "DespawnDictionary",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dictionary);
}
template<typename T>
 void Zenject::Internal::ZenPools::DespawnHashSet(System::Collections::Generic::HashSet_1<T> set)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "DespawnHashSet",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, set);
}
 Zenject::Internal::LookupId Zenject::Internal::ZenPools::SpawnLookupId(Zenject::IProvider provider, Zenject::BindingId bindingId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnLookupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindingId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::Internal::LookupId, false>(nullptr, ___internal_method, provider, bindingId);
}
 void Zenject::Internal::ZenPools::DespawnLookupId(Zenject::Internal::LookupId lookupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnLookupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Internal::LookupId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lookupId);
}
template<typename T>
 System::Collections::Generic::List_1<T> Zenject::Internal::ZenPools::SpawnList()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "SpawnList",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(nullptr, ___internal_method);
}
template<typename T>
 void Zenject::Internal::ZenPools::DespawnList(System::Collections::Generic::List_1<T> list)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "DespawnList",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list);
}
template<typename T>
 void Zenject::Internal::ZenPools::DespawnArray(::ArrayW<T> arr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "DespawnArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arr);
}
template<typename T>
 ::ArrayW<T> Zenject::Internal::ZenPools::SpawnArray(int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                        "SpawnArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, length);
}
 Zenject::InjectContext Zenject::Internal::ZenPools::SpawnInjectContext(Zenject::DiContainer container, System::Type memberType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnInjectContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectContext, false>(nullptr, ___internal_method, container, memberType);
}
 void Zenject::Internal::ZenPools::DespawnInjectContext(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "DespawnInjectContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context);
}
 Zenject::InjectContext Zenject::Internal::ZenPools::SpawnInjectContext(Zenject::DiContainer container, Zenject::InjectableInfo injectableInfo, Zenject::InjectContext currentContext, ::bs_hook::Il2CppWrapperType targetInstance, System::Type targetType, ::bs_hook::Il2CppWrapperType concreteIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ZenPools>::get(),
                            "SpawnInjectContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectContext, false>(nullptr, ___internal_method, container, injectableInfo, currentContext, targetInstance, targetType, concreteIdentifier);
}
