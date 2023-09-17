#pragma once
namespace {
#include "GlobalNamespace/zzzz__MemoryPoolContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MemoryPoolContainer_2.get_activeItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<T1> (::GlobalNamespace::MemoryPoolContainer_2::*)()>(&::GlobalNamespace::MemoryPoolContainer_2::get_activeItems)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MemoryPoolContainer_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MemoryPoolContainer_2::*)(::Zenject::IMemoryPool_1<T0>)>(&::GlobalNamespace::MemoryPoolContainer_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T0>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MemoryPoolContainer_2.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T0 (::GlobalNamespace::MemoryPoolContainer_2::*)()>(&::GlobalNamespace::MemoryPoolContainer_2::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MemoryPoolContainer_2.Despawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MemoryPoolContainer_2::*)(T0)>(&::GlobalNamespace::MemoryPoolContainer_2::Despawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MemoryPoolContainer_2::__set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T1> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T1>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LazyCopyHashSet_1<T1>>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1> ::GlobalNamespace::MemoryPoolContainer_2::__get__activeItems() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T1>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MemoryPoolContainer_2::__set__memoryPool(::Zenject::IMemoryPool_1<T0> value)  {
::cordl_internals::setInstanceField<::Zenject::IMemoryPool_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::IMemoryPool_1<T0>>(value));
}
constexpr ::Zenject::IMemoryPool_1<T0> ::GlobalNamespace::MemoryPoolContainer_2::__get__memoryPool() const {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::List_1<T1> ::GlobalNamespace::MemoryPoolContainer_2::get_activeItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T1>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "memoryPool", ty: "::Zenject::IMemoryPool_1<T0>", modifiers: "", def_value: None }]
 ::GlobalNamespace::MemoryPoolContainer_2::MemoryPoolContainer_2(::Zenject::IMemoryPool_1<T0> memoryPool)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MemoryPoolContainer_2>(memoryPool))) {}
 void ::GlobalNamespace::MemoryPoolContainer_2::_ctor(::Zenject::IMemoryPool_1<T0> memoryPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memoryPool);
}
 T0 ::GlobalNamespace::MemoryPoolContainer_2::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T0, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MemoryPoolContainer_2::Despawn(T0 item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_2>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
} // end anonymous namespace
