#pragma once
namespace {
#include "GlobalNamespace/zzzz__SimpleMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleMemoryPool_1.get_items
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<T> (::GlobalNamespace::SimpleMemoryPool_1::*)()>(&::GlobalNamespace::SimpleMemoryPool_1::get_items)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleMemoryPool_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleMemoryPool_1::*)(int32_t, ::System::Func_1<T>)>(&::GlobalNamespace::SimpleMemoryPool_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleMemoryPool_1.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::GlobalNamespace::SimpleMemoryPool_1::*)()>(&::GlobalNamespace::SimpleMemoryPool_1::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleMemoryPool_1.Despawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleMemoryPool_1::*)(T)>(&::GlobalNamespace::SimpleMemoryPool_1::Despawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SimpleMemoryPool_1::__set__activeElements(::GlobalNamespace::LazyCopyHashSet_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LazyCopyHashSet_1<T>>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<T> ::GlobalNamespace::SimpleMemoryPool_1::__get__activeElements() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SimpleMemoryPool_1::__set__inactiveElements(::System::Collections::Generic::List_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<T>>(value));
}
constexpr ::System::Collections::Generic::List_1<T> ::GlobalNamespace::SimpleMemoryPool_1::__get__inactiveElements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SimpleMemoryPool_1::__set__createNewItemFunc(::System::Func_1<T> value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_1<T>>(value));
}
constexpr ::System::Func_1<T> ::GlobalNamespace::SimpleMemoryPool_1::__get__createNewItemFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::List_1<T> ::GlobalNamespace::SimpleMemoryPool_1::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "startCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createNewItemFunc", ty: "::System::Func_1<T>", modifiers: "", def_value: None }]
 ::GlobalNamespace::SimpleMemoryPool_1::SimpleMemoryPool_1(int32_t startCapacity, ::System::Func_1<T> createNewItemFunc)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimpleMemoryPool_1>(startCapacity, createNewItemFunc))) {}
 void ::GlobalNamespace::SimpleMemoryPool_1::_ctor(int32_t startCapacity, ::System::Func_1<T> createNewItemFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startCapacity, createNewItemFunc);
}
 T ::GlobalNamespace::SimpleMemoryPool_1::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SimpleMemoryPool_1::Despawn(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
} // end anonymous namespace
