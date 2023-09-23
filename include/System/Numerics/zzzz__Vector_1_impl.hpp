#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Numerics/zzzz__Register_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
// Ctor Parameters [CppParam { name: "_placeholder", ty: "System::Numerics::Vector_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::System__Numerics__Vector_1__VectorSizeHelper(System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept : ::bs_hook::ValueTypeWrapper() {this->_placeholder = _placeholder;
this->_byte = _byte;
}
constexpr void System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__set__placeholder(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setInstanceField<System::Numerics::Vector_1<T>, 0x0>(this->__instance, std::forward<System::Numerics::Vector_1<T>>(value));
}
constexpr System::Numerics::Vector_1<T> System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__get__placeholder() const {
return ::cordl_internals::getInstanceField<System::Numerics::Vector_1<T>, 0x0>(this->__instance);
}
constexpr void System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__set__byte(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__get__byte() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->__instance);
}
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Numerics::Vector_1<uint64_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.get_Zero
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::Vector_1<uint64_t> (*)()>(&System::Numerics::Vector_1<uint64_t>::get_Zero)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.InitializeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Numerics::Vector_1<uint64_t>::InitializeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint64_t>::*)(uint64_t)>(&System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint64_t>::*)(void*)>(&System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint64_t>::*)(void*, int32_t)>(&System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint64_t>::*)(ByRef<System::Numerics::Register>)>(&System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::Register>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Numerics::Vector_1<uint64_t>::*)(int32_t)>(&System::Numerics::Vector_1<uint64_t>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::Vector_1<uint64_t>::*)(::bs_hook::Il2CppWrapperType)>(&System::Numerics::Vector_1<uint64_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::Vector_1<uint64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::Vector_1<uint64_t>::*)(System::Numerics::Vector_1<uint64_t>)>(&System::Numerics::Vector_1<uint64_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Numerics::Vector_1<uint64_t>::*)()>(&System::Numerics::Vector_1<uint64_t>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::Vector_1<uint64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::Vector_1<uint64_t>::*)()>(&System::Numerics::Vector_1<uint64_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::Vector_1<uint64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::Vector_1<uint64_t>::*)(::StringW, System::IFormatProvider)>(&System::Numerics::Vector_1<uint64_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Numerics::Vector_1<uint64_t>, System::Numerics::Vector_1<uint64_t>)>(&System::Numerics::Vector_1<uint64_t>::op_Equality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Numerics::Vector_1<uint64_t>, System::Numerics::Vector_1<uint64_t>)>(&System::Numerics::Vector_1<uint64_t>::op_Inequality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.op_Explicit_System__Numerics__Vector_1_uint64_t_
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::Vector_1<uint64_t> (*)(System::Numerics::Vector_1<uint64_t>)>(&System::Numerics::Vector_1<uint64_t>::op_Explicit_System__Numerics__Vector_1_uint64_t_)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::Vector_1<uint64_t> (*)(System::Numerics::Vector_1<uint64_t>, System::Numerics::Vector_1<uint64_t>)>(&System::Numerics::Vector_1<uint64_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.ScalarEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, uint64_t)>(&System::Numerics::Vector_1<uint64_t>::ScalarEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.GetOneValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&System::Numerics::Vector_1<uint64_t>::GetOneValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint64_t>.GetAllBitsSetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&System::Numerics::Vector_1<uint64_t>::GetAllBitsSetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<System::Numerics::Vector_1<uint64_t>>
constexpr  System::Numerics::Vector_1<uint64_t>::operator System::IEquatable_1<System::Numerics::Vector_1<uint64_t>>() const {
return System::IEquatable_1<System::Numerics::Vector_1<uint64_t>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IFormattable
constexpr  System::Numerics::Vector_1<uint64_t>::operator System::IFormattable() const {
return System::IFormattable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "register", ty: "System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::Vector_1<uint64_t>::Vector_1(System::Numerics::Register register) noexcept : ::bs_hook::ValueTypeWrapper() {this->register = register;
}
constexpr void System::Numerics::Vector_1<uint64_t>::__set_register(System::Numerics::Register value)  {
::cordl_internals::setInstanceField<System::Numerics::Register, 0x0>(this->__instance, std::forward<System::Numerics::Register>(value));
}
constexpr System::Numerics::Register System::Numerics::Vector_1<uint64_t>::__get_register() const {
return ::cordl_internals::getInstanceField<System::Numerics::Register, 0x0>(this->__instance);
}
 void System::Numerics::Vector_1<uint64_t>::__set_s_count(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>(std::forward<int32_t>(value));
}
 int32_t System::Numerics::Vector_1<uint64_t>::__get_s_count()  {
return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>();
}
 void System::Numerics::Vector_1<uint64_t>::__set_s_zero(System::Numerics::Vector_1<uint64_t> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<uint64_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>(std::forward<System::Numerics::Vector_1<uint64_t>>(value));
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::__get_s_zero()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<uint64_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>();
}
 void System::Numerics::Vector_1<uint64_t>::__set_s_one(System::Numerics::Vector_1<uint64_t> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<uint64_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>(std::forward<System::Numerics::Vector_1<uint64_t>>(value));
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::__get_s_one()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<uint64_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>();
}
 void System::Numerics::Vector_1<uint64_t>::__set_s_allOnes(System::Numerics::Vector_1<uint64_t> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<uint64_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>(std::forward<System::Numerics::Vector_1<uint64_t>>(value));
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::__get_s_allOnes()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<uint64_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get>();
}
 int32_t System::Numerics::Vector_1<uint64_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method);
}
 int32_t System::Numerics::Vector_1<uint64_t>::InitializeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::Numerics::Vector_1<uint64_t>::_ctor(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Numerics::Vector_1<uint64_t>::_ctor(void* dataPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer);
}
 void System::Numerics::Vector_1<uint64_t>::_ctor(void* dataPointer, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer, offset);
}
 void System::Numerics::Vector_1<uint64_t>::_ctor(ByRef<System::Numerics::Register> existingRegister)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::Register>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, existingRegister);
}
 uint64_t System::Numerics::Vector_1<uint64_t>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 bool System::Numerics::Vector_1<uint64_t>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::Numerics::Vector_1<uint64_t>::Equals(System::Numerics::Vector_1<uint64_t> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Numerics::Vector_1<uint64_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<uint64_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<uint64_t>::ToString(::StringW format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, formatProvider);
}
 bool System::Numerics::Vector_1<uint64_t>::op_Equality(System::Numerics::Vector_1<uint64_t> left, System::Numerics::Vector_1<uint64_t> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<uint64_t>::op_Inequality(System::Numerics::Vector_1<uint64_t> left, System::Numerics::Vector_1<uint64_t> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::op_Explicit_System__Numerics__Vector_1_uint64_t_(System::Numerics::Vector_1<uint64_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::Equals(System::Numerics::Vector_1<uint64_t> left, System::Numerics::Vector_1<uint64_t> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<uint64_t>::ScalarEquals(uint64_t left, uint64_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 uint64_t System::Numerics::Vector_1<uint64_t>::GetOneValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
 uint64_t System::Numerics::Vector_1<uint64_t>::GetAllBitsSetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Numerics::Vector_1<uint16_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.get_Zero
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::Vector_1<uint16_t> (*)()>(&System::Numerics::Vector_1<uint16_t>::get_Zero)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.InitializeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Numerics::Vector_1<uint16_t>::InitializeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint16_t>::*)(uint16_t)>(&System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint16_t>::*)(void*)>(&System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint16_t>::*)(void*, int32_t)>(&System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Numerics::Vector_1<uint16_t>::*)(ByRef<System::Numerics::Register>)>(&System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::Register>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Numerics::Vector_1<uint16_t>::*)(int32_t)>(&System::Numerics::Vector_1<uint16_t>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::Vector_1<uint16_t>::*)(::bs_hook::Il2CppWrapperType)>(&System::Numerics::Vector_1<uint16_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::Vector_1<uint16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Numerics::Vector_1<uint16_t>::*)(System::Numerics::Vector_1<uint16_t>)>(&System::Numerics::Vector_1<uint16_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Numerics::Vector_1<uint16_t>::*)()>(&System::Numerics::Vector_1<uint16_t>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::Vector_1<uint16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::Vector_1<uint16_t>::*)()>(&System::Numerics::Vector_1<uint16_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Numerics::Vector_1<uint16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Numerics::Vector_1<uint16_t>::*)(::StringW, System::IFormatProvider)>(&System::Numerics::Vector_1<uint16_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Numerics::Vector_1<uint16_t>, System::Numerics::Vector_1<uint16_t>)>(&System::Numerics::Vector_1<uint16_t>::op_Equality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Numerics::Vector_1<uint16_t>, System::Numerics::Vector_1<uint16_t>)>(&System::Numerics::Vector_1<uint16_t>::op_Inequality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.op_Explicit_System__Numerics__Vector_1_uint64_t_
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::Vector_1<uint64_t> (*)(System::Numerics::Vector_1<uint16_t>)>(&System::Numerics::Vector_1<uint16_t>::op_Explicit_System__Numerics__Vector_1_uint64_t_)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Numerics::Vector_1<uint16_t> (*)(System::Numerics::Vector_1<uint16_t>, System::Numerics::Vector_1<uint16_t>)>(&System::Numerics::Vector_1<uint16_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.ScalarEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint16_t, uint16_t)>(&System::Numerics::Vector_1<uint16_t>::ScalarEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.GetOneValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)()>(&System::Numerics::Vector_1<uint16_t>::GetOneValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Numerics::Vector_1<uint16_t>.GetAllBitsSetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)()>(&System::Numerics::Vector_1<uint16_t>::GetAllBitsSetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<System::Numerics::Vector_1<uint16_t>>
constexpr  System::Numerics::Vector_1<uint16_t>::operator System::IEquatable_1<System::Numerics::Vector_1<uint16_t>>() const {
return System::IEquatable_1<System::Numerics::Vector_1<uint16_t>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IFormattable
constexpr  System::Numerics::Vector_1<uint16_t>::operator System::IFormattable() const {
return System::IFormattable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "register", ty: "System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::Vector_1<uint16_t>::Vector_1(System::Numerics::Register register) noexcept : ::bs_hook::ValueTypeWrapper() {this->register = register;
}
constexpr void System::Numerics::Vector_1<uint16_t>::__set_register(System::Numerics::Register value)  {
::cordl_internals::setInstanceField<System::Numerics::Register, 0x0>(this->__instance, std::forward<System::Numerics::Register>(value));
}
constexpr System::Numerics::Register System::Numerics::Vector_1<uint16_t>::__get_register() const {
return ::cordl_internals::getInstanceField<System::Numerics::Register, 0x0>(this->__instance);
}
 void System::Numerics::Vector_1<uint16_t>::__set_s_count(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>(std::forward<int32_t>(value));
}
 int32_t System::Numerics::Vector_1<uint16_t>::__get_s_count()  {
return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>();
}
 void System::Numerics::Vector_1<uint16_t>::__set_s_zero(System::Numerics::Vector_1<uint16_t> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<uint16_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>(std::forward<System::Numerics::Vector_1<uint16_t>>(value));
}
 System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::__get_s_zero()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<uint16_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>();
}
 void System::Numerics::Vector_1<uint16_t>::__set_s_one(System::Numerics::Vector_1<uint16_t> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<uint16_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>(std::forward<System::Numerics::Vector_1<uint16_t>>(value));
}
 System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::__get_s_one()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<uint16_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>();
}
 void System::Numerics::Vector_1<uint16_t>::__set_s_allOnes(System::Numerics::Vector_1<uint16_t> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<uint16_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>(std::forward<System::Numerics::Vector_1<uint16_t>>(value));
}
 System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::__get_s_allOnes()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<uint16_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get>();
}
 int32_t System::Numerics::Vector_1<uint16_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint16_t>, false>(nullptr, ___internal_method);
}
 int32_t System::Numerics::Vector_1<uint16_t>::InitializeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::Numerics::Vector_1<uint16_t>::_ctor(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Numerics::Vector_1<uint16_t>::_ctor(void* dataPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer);
}
 void System::Numerics::Vector_1<uint16_t>::_ctor(void* dataPointer, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer, offset);
}
 void System::Numerics::Vector_1<uint16_t>::_ctor(ByRef<System::Numerics::Register> existingRegister)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::Register>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, existingRegister);
}
 uint16_t System::Numerics::Vector_1<uint16_t>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 bool System::Numerics::Vector_1<uint16_t>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::Numerics::Vector_1<uint16_t>::Equals(System::Numerics::Vector_1<uint16_t> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Numerics::Vector_1<uint16_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<uint16_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<uint16_t>::ToString(::StringW format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, formatProvider);
}
 bool System::Numerics::Vector_1<uint16_t>::op_Equality(System::Numerics::Vector_1<uint16_t> left, System::Numerics::Vector_1<uint16_t> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<uint16_t>::op_Inequality(System::Numerics::Vector_1<uint16_t> left, System::Numerics::Vector_1<uint16_t> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint16_t>::op_Explicit_System__Numerics__Vector_1_uint64_t_(System::Numerics::Vector_1<uint16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
 System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::Equals(System::Numerics::Vector_1<uint16_t> left, System::Numerics::Vector_1<uint16_t> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint16_t>, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<uint16_t>::ScalarEquals(uint16_t left, uint16_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 uint16_t System::Numerics::Vector_1<uint16_t>::GetOneValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method);
}
 uint16_t System::Numerics::Vector_1<uint16_t>::GetAllBitsSetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method);
}
