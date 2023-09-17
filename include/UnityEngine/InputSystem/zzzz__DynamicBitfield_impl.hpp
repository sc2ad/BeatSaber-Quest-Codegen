#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::SetLength)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29244a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.SetBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::SetBit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29327e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "SetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.TestBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::TestBit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x293287c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "TestBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.ClearBit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::ClearBit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29245d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "ClearBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.BitCountToULongCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::BitCountToULongCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29327cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "BitCountToULongCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::DynamicBitfield::DynamicBitfield(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> array, int32_t length) noexcept : ::bs_hook::ValueTypeWrapper() {this->array = array;
this->length = length;
}
constexpr void ::UnityEngine::InputSystem::DynamicBitfield::__set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> ::UnityEngine::InputSystem::DynamicBitfield::__get_array() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::DynamicBitfield::__set_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::DynamicBitfield::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void ::UnityEngine::InputSystem::DynamicBitfield::SetLength(int32_t newLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, newLength);
}
 void ::UnityEngine::InputSystem::DynamicBitfield::SetBit(int32_t bitIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "SetBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, bitIndex);
}
 bool ::UnityEngine::InputSystem::DynamicBitfield::TestBit(int32_t bitIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "TestBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, bitIndex);
}
 void ::UnityEngine::InputSystem::DynamicBitfield::ClearBit(int32_t bitIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "ClearBit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, bitIndex);
}
 int32_t ::UnityEngine::InputSystem::DynamicBitfield::BitCountToULongCount(int32_t bitCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DynamicBitfield>::get(),
                            "BitCountToULongCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bitCount);
}
} // end anonymous namespace
