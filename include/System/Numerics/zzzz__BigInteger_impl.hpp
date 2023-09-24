#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::System__Numerics__BigInteger__GetBytesMode::System__Numerics__BigInteger__GetBytesMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Numerics::System__Numerics__BigInteger__GetBytesMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Numerics::System__Numerics__BigInteger__GetBytesMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Numerics::System__Numerics__BigInteger__GetBytesMode  System::Numerics::System__Numerics__BigInteger__GetBytesMode::AllocateArray{0};
constexpr System::Numerics::System__Numerics__BigInteger__GetBytesMode  System::Numerics::System__Numerics__BigInteger__GetBytesMode::Count{1};
constexpr System::Numerics::System__Numerics__BigInteger__GetBytesMode  System::Numerics::System__Numerics__BigInteger__GetBytesMode::Span{2};
//  Writing Method size for method: System::Numerics::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::BigInteger::*)(int32_t)>(&System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26b2bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::BigInteger::*)(int64_t)>(&System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26b2c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::BigInteger::*)(::ArrayW<uint8_t>)>(&System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26b2d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::BigInteger::*)(System::ReadOnlySpan_1<uint8_t>, bool, bool)>(&System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x26b2e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::BigInteger::*)(int32_t, ::ArrayW<uint32_t>)>(&System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26b33f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::BigInteger::*)(::ArrayW<uint32_t>, bool)>(&System::Numerics::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x26b3400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.get_MinusOne
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)()>(&System::Numerics::BigInteger::get_MinusOne)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b35a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "get_MinusOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Numerics::BigInteger::*)()>(&System::Numerics::BigInteger::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b35fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::BigInteger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(::bs_hook::Il2CppWrapperType)>(&System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26b3650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::BigInteger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(System::Numerics::BigInteger)>(&System::Numerics::BigInteger::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26b36c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Numerics::BigInteger::*)(System::Numerics::BigInteger)>(&System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26b37ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Numerics::BigInteger::*)(::bs_hook::Il2CppWrapperType)>(&System::Numerics::BigInteger::CompareTo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26b3914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.TryWriteBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(System::Span_1<uint8_t>, ByRef<int32_t>, bool, bool)>(&System::Numerics::BigInteger::TryWriteBytes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26b39ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "TryWriteBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.TryWriteOrCountBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::BigInteger::*)(System::Span_1<uint8_t>, ByRef<int32_t>, bool, bool)>(&System::Numerics::BigInteger::TryWriteOrCountBytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26b3f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "TryWriteOrCountBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.TryGetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Numerics::BigInteger::*)(System::Numerics::System__Numerics__BigInteger__GetBytesMode, System::Span_1<uint8_t>, bool, bool, ByRef<int32_t>)>(&System::Numerics::BigInteger::TryGetBytes)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x26b3a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "TryGetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::System__Numerics__BigInteger__GetBytesMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::BigInteger::*)()>(&System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26b3f4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::BigInteger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::BigInteger::*)(::StringW, System::IFormatProvider)>(&System::Numerics::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26b4028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t)>(&System::Numerics::BigInteger::Add)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x26b4060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.Subtract
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t)>(&System::Numerics::BigInteger::Subtract)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x26b43b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Subtract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_Implicit_System__Numerics__BigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(uint8_t)>(&System::Numerics::BigInteger::op_Implicit_System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b4768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_Implicit_System__Numerics__BigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(int32_t)>(&System::Numerics::BigInteger::op_Implicit_System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b4790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_Implicit_System__Numerics__BigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(int64_t)>(&System::Numerics::BigInteger::op_Implicit_System__Numerics__BigInteger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b41ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_Explicit_int32_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Numerics::BigInteger)>(&System::Numerics::BigInteger::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26b47b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_LeftShift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(System::Numerics::BigInteger, int32_t)>(&System::Numerics::BigInteger::op_LeftShift)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x26b4894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_LeftShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_RightShift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(System::Numerics::BigInteger, int32_t)>(&System::Numerics::BigInteger::op_RightShift)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x26b4ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_RightShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.op_Addition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::BigInteger (*)(System::Numerics::BigInteger, System::Numerics::BigInteger)>(&System::Numerics::BigInteger::op_Addition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26b4ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.GetPartsForBitManipulation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::Numerics::BigInteger>, ByRef<::ArrayW<uint32_t>>, ByRef<int32_t>)>(&System::Numerics::BigInteger::GetPartsForBitManipulation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26b4de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "GetPartsForBitManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::BigInteger>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::BigInteger.GetDiffLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, int32_t)>(&System::Numerics::BigInteger::GetDiffLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26b3784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "GetDiffLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IFormattable
constexpr  System::Numerics::BigInteger::operator System::IFormattable() const {
return System::IFormattable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::Numerics::BigInteger::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::Numerics::BigInteger>
constexpr  System::Numerics::BigInteger::operator System::IComparable_1<System::Numerics::BigInteger>() const {
return System::IComparable_1<System::Numerics::BigInteger>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IEquatable_1<System::Numerics::BigInteger>
constexpr  System::Numerics::BigInteger::operator System::IEquatable_1<System::Numerics::BigInteger>() const {
return System::IEquatable_1<System::Numerics::BigInteger>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Numerics::BigInteger::BigInteger(int32_t _sign, ::ArrayW<uint32_t> _bits) noexcept : ::bs_hook::ValueTypeWrapper() {this->_sign = _sign;
this->_bits = _bits;
}
constexpr void System::Numerics::BigInteger::__set__sign(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Numerics::BigInteger::__get__sign() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::BigInteger::__set__bits(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x8>(this->__instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> System::Numerics::BigInteger::__get__bits() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x8>(this->__instance);
}
 void System::Numerics::BigInteger::__set_s_bnMinInt(System::Numerics::BigInteger value)  {
::cordl_internals::setStaticField<System::Numerics::BigInteger, "s_bnMinInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>(std::forward<System::Numerics::BigInteger>(value));
}
 System::Numerics::BigInteger System::Numerics::BigInteger::__get_s_bnMinInt()  {
return ::cordl_internals::getStaticField<System::Numerics::BigInteger, "s_bnMinInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>();
}
 void System::Numerics::BigInteger::__set_s_bnOneInt(System::Numerics::BigInteger value)  {
::cordl_internals::setStaticField<System::Numerics::BigInteger, "s_bnOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>(std::forward<System::Numerics::BigInteger>(value));
}
 System::Numerics::BigInteger System::Numerics::BigInteger::__get_s_bnOneInt()  {
return ::cordl_internals::getStaticField<System::Numerics::BigInteger, "s_bnOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>();
}
 void System::Numerics::BigInteger::__set_s_bnZeroInt(System::Numerics::BigInteger value)  {
::cordl_internals::setStaticField<System::Numerics::BigInteger, "s_bnZeroInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>(std::forward<System::Numerics::BigInteger>(value));
}
 System::Numerics::BigInteger System::Numerics::BigInteger::__get_s_bnZeroInt()  {
return ::cordl_internals::getStaticField<System::Numerics::BigInteger, "s_bnZeroInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>();
}
 void System::Numerics::BigInteger::__set_s_bnMinusOneInt(System::Numerics::BigInteger value)  {
::cordl_internals::setStaticField<System::Numerics::BigInteger, "s_bnMinusOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>(std::forward<System::Numerics::BigInteger>(value));
}
 System::Numerics::BigInteger System::Numerics::BigInteger::__get_s_bnMinusOneInt()  {
return ::cordl_internals::getStaticField<System::Numerics::BigInteger, "s_bnMinusOneInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>();
}
 void System::Numerics::BigInteger::__set_s_success(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_success", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Numerics::BigInteger::__get_s_success()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_success", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get>();
}
 void System::Numerics::BigInteger::_ctor(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Numerics::BigInteger::_ctor(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Numerics::BigInteger::_ctor(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
/// @param isUnsigned: bool (default: false)
/// @param isBigEndian: bool (default: false)
 void System::Numerics::BigInteger::_ctor(System::ReadOnlySpan_1<uint8_t> value, bool isUnsigned, bool isBigEndian)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value, isUnsigned, isBigEndian);
}
 void System::Numerics::BigInteger::_ctor(int32_t n, ::ArrayW<uint32_t> rgu)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, n, rgu);
}
 void System::Numerics::BigInteger::_ctor(::ArrayW<uint32_t> value, bool negative)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value, negative);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::get_MinusOne()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "get_MinusOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method);
}
 int32_t System::Numerics::BigInteger::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Numerics::BigInteger::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::Numerics::BigInteger::Equals(System::Numerics::BigInteger other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Numerics::BigInteger::CompareTo(System::Numerics::BigInteger other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Numerics::BigInteger::CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
/// @param isUnsigned: bool (default: false)
/// @param isBigEndian: bool (default: false)
 bool System::Numerics::BigInteger::TryWriteBytes(System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "TryWriteBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, destination, bytesWritten, isUnsigned, isBigEndian);
}
/// @param isUnsigned: bool (default: false)
/// @param isBigEndian: bool (default: false)
 bool System::Numerics::BigInteger::TryWriteOrCountBytes(System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten, bool isUnsigned, bool isBigEndian)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "TryWriteOrCountBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, destination, bytesWritten, isUnsigned, isBigEndian);
}
 ::ArrayW<uint8_t> System::Numerics::BigInteger::TryGetBytes(System::Numerics::System__Numerics__BigInteger__GetBytesMode mode, System::Span_1<uint8_t> destination, bool isUnsigned, bool isBigEndian, ByRef<int32_t> bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "TryGetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::System__Numerics__BigInteger__GetBytesMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, mode, destination, isUnsigned, isBigEndian, bytesWritten);
}
 ::StringW System::Numerics::BigInteger::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::BigInteger::ToString(::StringW format, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, provider);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::Add(::ArrayW<uint32_t> leftBits, int32_t leftSign, ::ArrayW<uint32_t> rightBits, int32_t rightSign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, leftBits, leftSign, rightBits, rightSign);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::Subtract(::ArrayW<uint32_t> leftBits, int32_t leftSign, ::ArrayW<uint32_t> rightBits, int32_t rightSign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "Subtract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, leftBits, leftSign, rightBits, rightSign);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit_System__Numerics__BigInteger(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit_System__Numerics__BigInteger(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::op_Implicit_System__Numerics__BigInteger(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
 int32_t System::Numerics::BigInteger::op_Explicit_int32_t(System::Numerics::BigInteger value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::op_LeftShift(System::Numerics::BigInteger value, int32_t shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_LeftShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, shift);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::op_RightShift(System::Numerics::BigInteger value, int32_t shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_RightShift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, shift);
}
 System::Numerics::BigInteger System::Numerics::BigInteger::op_Addition(System::Numerics::BigInteger left, System::Numerics::BigInteger right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::BigInteger, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::BigInteger::GetPartsForBitManipulation(ByRef<System::Numerics::BigInteger> x, ByRef<::ArrayW<uint32_t>> xd, ByRef<int32_t> xl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "GetPartsForBitManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::BigInteger>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x, xd, xl);
}
 int32_t System::Numerics::BigInteger::GetDiffLength(::ArrayW<uint32_t> rgu1, ::ArrayW<uint32_t> rgu2, int32_t cu)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::BigInteger>::get(),
                            "GetDiffLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, rgu1, rgu2, cu);
}
