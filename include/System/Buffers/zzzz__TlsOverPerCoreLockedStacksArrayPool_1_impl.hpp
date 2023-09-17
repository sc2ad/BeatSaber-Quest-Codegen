#pragma once
#include "System/Buffers/zzzz__ArrayPool_1_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure::Low{0};
constexpr ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure::Medium{1};
constexpr ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure::High{2};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::*)(::ArrayW<T>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>, ::ArrayW<int32_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::__set__perCoreStacks(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::TryPush(::ArrayW<T> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<T> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, ::ArrayW<int32_t> bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)(::ArrayW<int32_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>, ::ArrayW<int32_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::__set__perCoreStacks(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPush(::ArrayW<int32_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<int32_t> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> pressure, ::ArrayW<int32_t> bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)(::ArrayW<char16_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>, ::ArrayW<int32_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::__set__perCoreStacks(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPush(::ArrayW<char16_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<char16_t> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> pressure, ::ArrayW<int32_t> bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)(::ArrayW<uint8_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>, ::ArrayW<int32_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::__set__perCoreStacks(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::__get__perCoreStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPush(::ArrayW<uint8_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<uint8_t> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> pressure, ::ArrayW<int32_t> bucketSizes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSizes);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::*)(::ArrayW<T>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>, int32_t)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::__set__arrays(::ArrayW<::ArrayW<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<T>>>(value));
}
constexpr ::ArrayW<::ArrayW<T>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::__set__firstStackItemMS(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::TryPush(::ArrayW<T> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<T> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, int32_t bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSize);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)(::ArrayW<int32_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>, int32_t)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__set__arrays(::ArrayW<::ArrayW<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<int32_t>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__set__firstStackItemMS(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPush(::ArrayW<int32_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<int32_t> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> pressure, int32_t bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSize);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)(::ArrayW<char16_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>, int32_t)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__set__arrays(::ArrayW<::ArrayW<char16_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<char16_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<char16_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<char16_t>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<char16_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__set__firstStackItemMS(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPush(::ArrayW<char16_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<char16_t> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> pressure, int32_t bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSize);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>.TryPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)(::ArrayW<uint8_t>)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>.TryPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)(uint32_t, int32_t, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>, int32_t)>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::*)()>(&::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__set__arrays(::ArrayW<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<uint8_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t>> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__arrays() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__set__firstStackItemMS(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::__get__firstStackItemMS() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPush(::ArrayW<uint8_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            "TryPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, array);
}
 ::ArrayW<uint8_t> ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::TryPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            "TryPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::Trim(uint32_t tickCount, int32_t id, ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> pressure, int32_t bucketSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tickCount, id, pressure, bucketSize);
}
// Ctor Parameters []
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack>())) {}
 void ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::*)(::ArrayW<T>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__set__bucketArraySizes(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__set__buckets(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__set_t_tlsBuckets(::ArrayW<::ArrayW<T>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<T>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get>(std::forward<::ArrayW<::ArrayW<T>>>(value));
}
 ::ArrayW<::ArrayW<T>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__get_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<T>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get>();
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__set__callbackCreated(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__set_s_trimBuffers(bool value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get>(std::forward<bool>(value));
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__get_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get>();
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__set_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType>>(value));
}
 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::__get_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get>();
}
// Ctor Parameters []
 ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::TlsOverPerCoreLockedStacksArrayPool_1()  : ::System::Buffers::ArrayPool_1<T>(THROW_UNLESS(::il2cpp_utils::New<TlsOverPerCoreLockedStacksArrayPool_1>())) {}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::CreatePerCoreLockedStacks(int32_t bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>, false>(const_cast<void*>(instance), ___internal_method, bucketIndex);
}
 int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<T> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Return(::ArrayW<T> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>, false>(nullptr, ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)(::ArrayW<int32_t>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set__bucketArraySizes(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set__buckets(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set_t_tlsBuckets(::ArrayW<::ArrayW<int32_t>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
 ::ArrayW<::ArrayW<int32_t>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get>();
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set__callbackCreated(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set_s_trimBuffers(bool value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get>(std::forward<bool>(value));
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get>();
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__set_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType>>(value));
}
 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::__get_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get>();
}
// Ctor Parameters []
 ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::TlsOverPerCoreLockedStacksArrayPool_1()  : ::System::Buffers::ArrayPool_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<TlsOverPerCoreLockedStacksArrayPool_1>())) {}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::CreatePerCoreLockedStacks(int32_t bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>, false>(const_cast<void*>(instance), ___internal_method, bucketIndex);
}
 int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Return(::ArrayW<int32_t> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>, false>(nullptr, ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)(::ArrayW<char16_t>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set__bucketArraySizes(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set__buckets(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set_t_tlsBuckets(::ArrayW<::ArrayW<char16_t>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<char16_t>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get>(std::forward<::ArrayW<::ArrayW<char16_t>>>(value));
}
 ::ArrayW<::ArrayW<char16_t>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<char16_t>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get>();
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set__callbackCreated(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set_s_trimBuffers(bool value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get>(std::forward<bool>(value));
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get>();
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__set_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType>>(value));
}
 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::__get_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get>();
}
// Ctor Parameters []
 ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::TlsOverPerCoreLockedStacksArrayPool_1()  : ::System::Buffers::ArrayPool_1<char16_t>(THROW_UNLESS(::il2cpp_utils::New<TlsOverPerCoreLockedStacksArrayPool_1>())) {}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::CreatePerCoreLockedStacks(int32_t bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>, false>(const_cast<void*>(instance), ___internal_method, bucketIndex);
}
 int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<char16_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Return(::ArrayW<char16_t> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>, false>(nullptr, ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.CreatePerCoreLockedStacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::CreatePerCoreLockedStacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)(int32_t)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)(::ArrayW<uint8_t>, bool)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Trim)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.Gen2GcCallbackFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Gen2GcCallbackFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.GetMemoryPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetMemoryPressure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>.GetTrimBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetTrimBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set__bucketArraySizes(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__bucketArraySizes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set__buckets(::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>>(value));
}
constexpr ::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set_t_tlsBuckets(::ArrayW<::ArrayW<uint8_t>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<uint8_t>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get>(std::forward<::ArrayW<::ArrayW<uint8_t>>>(value));
}
 ::ArrayW<::ArrayW<uint8_t>> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get_t_tlsBuckets()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<uint8_t>>, "t_tlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get>();
}
constexpr void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set__callbackCreated(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get__callbackCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set_s_trimBuffers(bool value)  {
::cordl_internals::setStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get>(std::forward<bool>(value));
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get_s_trimBuffers()  {
return ::cordl_internals::getStaticField<bool, "s_trimBuffers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get>();
}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__set_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType>>(value));
}
 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::__get_s_allTlsBuckets()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType>, "s_allTlsBuckets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get>();
}
// Ctor Parameters []
 ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::TlsOverPerCoreLockedStacksArrayPool_1()  : ::System::Buffers::ArrayPool_1<uint8_t>(THROW_UNLESS(::il2cpp_utils::New<TlsOverPerCoreLockedStacksArrayPool_1>())) {}
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::CreatePerCoreLockedStacks(int32_t bucketIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "CreatePerCoreLockedStacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, bucketIndex);
}
 int32_t ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Return(::ArrayW<uint8_t> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "Gen2GcCallbackFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target);
}
 ::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetMemoryPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "GetMemoryPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::____System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>, false>(nullptr, ___internal_method);
}
 bool ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>::GetTrimBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>>::get(),
                            "GetTrimBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
