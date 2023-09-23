#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Zenject/zzzz__DisposeBlock_def.hpp"
#include "Zenject/zzzz__IMemoryPool_6_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_8_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_4_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_5_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
// Ctor Parameters [CppParam { name: "Pool", ty: "Zenject::IMemoryPool", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair::Zenject__DisposeBlock__SpawnedObjectPoolPair(Zenject::IMemoryPool Pool, ::bs_hook::Il2CppWrapperType Object) noexcept : ::bs_hook::ValueTypeWrapper() {this->Pool = Pool;
this->Object = Object;
}
constexpr void Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair::__set_Pool(Zenject::IMemoryPool value)  {
::cordl_internals::setInstanceField<Zenject::IMemoryPool, 0x0>(this->__instance, std::forward<Zenject::IMemoryPool>(value));
}
constexpr Zenject::IMemoryPool Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair::__get_Pool() const {
return ::cordl_internals::getInstanceField<Zenject::IMemoryPool, 0x0>(this->__instance);
}
constexpr void Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair::__set_Object(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair::__get_Object() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
//  Writing Method size for method: Zenject::DisposeBlock.OnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::DisposeBlock)>(&Zenject::DisposeBlock::OnSpawned)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2da4384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DisposeBlock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::DisposeBlock)>(&Zenject::DisposeBlock::OnDespawned)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2da43b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DisposeBlock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock.LazyInitializeDisposableList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)()>(&Zenject::DisposeBlock::LazyInitializeDisposableList)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2da4710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "LazyInitializeDisposableList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)(System::IDisposable)>(&Zenject::DisposeBlock::Add)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2da4804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)(System::IDisposable)>(&Zenject::DisposeBlock::Remove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2da48ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DisposeBlock (*)()>(&Zenject::DisposeBlock::Spawn)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2da4950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)()>(&Zenject::DisposeBlock::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2da49c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposeBlock._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposeBlock::*)()>(&Zenject::DisposeBlock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da4a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  Zenject::DisposeBlock::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::DisposeBlock::__set__pool(Zenject::StaticMemoryPool_1<Zenject::DisposeBlock> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_1<Zenject::DisposeBlock>, "_pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get>(std::forward<Zenject::StaticMemoryPool_1<Zenject::DisposeBlock>>(value));
}
 Zenject::StaticMemoryPool_1<Zenject::DisposeBlock> Zenject::DisposeBlock::__get__pool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_1<Zenject::DisposeBlock>, "_pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get>();
}
constexpr void Zenject::DisposeBlock::__set__disposables(System::Collections::Generic::List_1<System::IDisposable> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::IDisposable>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::IDisposable>>(value));
}
constexpr System::Collections::Generic::List_1<System::IDisposable> Zenject::DisposeBlock::__get__disposables() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::IDisposable>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DisposeBlock::__set__objectPoolPairs(System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair> Zenject::DisposeBlock::__get__objectPoolPairs() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::DisposeBlock::OnSpawned(Zenject::DisposeBlock that)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DisposeBlock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, that);
}
 void Zenject::DisposeBlock::OnDespawned(Zenject::DisposeBlock that)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DisposeBlock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, that);
}
 void Zenject::DisposeBlock::LazyInitializeDisposableList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "LazyInitializeDisposableList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void Zenject::DisposeBlock::AddRange(System::Collections::Generic::IList_1<T> disposables)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "AddRange",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposables);
}
 void Zenject::DisposeBlock::Add(System::IDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable);
}
 void Zenject::DisposeBlock::Remove(System::IDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable);
}
template<typename T>
 void Zenject::DisposeBlock::StoreSpawnedObject(T obj, Zenject::IDespawnableMemoryPool_1<T> pool)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "StoreSpawnedObject",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IDespawnableMemoryPool_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, pool);
}
template<typename T>
 T Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_1<T> pool)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, pool);
}
template<typename TValue,typename TParam1>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_2<TParam1,TValue> pool, TParam1 p1)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_2<TParam1,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1);
}
template<typename TValue,typename TParam1,typename TParam2>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_3<TParam1,TParam2,TValue> pool, TParam1 p1, TParam2 p2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_3<TParam1,TParam2,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1, p2);
}
template<typename TValue,typename TParam1,typename TParam2,typename TParam3>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1, p2, p3);
}
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1, p2, p3, p4);
}
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1, p2, p3, p4, p5);
}
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1, p2, p3, p4, p5, p6);
}
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7>
 TValue Zenject::DisposeBlock::Spawn(Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "Spawn",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam7>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, pool, p1, p2, p3, p4, p5, p6, p7);
}
template<typename T>
 System::Collections::Generic::List_1<T> Zenject::DisposeBlock::SpawnList(System::Collections::Generic::IEnumerable_1<T> elements)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "SpawnList",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(const_cast<void*>(instance), ___internal_method, elements);
}
template<typename T>
 System::Collections::Generic::List_1<T> Zenject::DisposeBlock::SpawnList()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                        "SpawnList",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::DisposeBlock Zenject::DisposeBlock::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DisposeBlock, false>(nullptr, ___internal_method);
}
 void Zenject::DisposeBlock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Zenject::DisposeBlock::DisposeBlock()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DisposeBlock>())) {}
 void Zenject::DisposeBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposeBlock>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
