#pragma once
#include "System/Security/Principal/zzzz__IdentityReference_impl.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::SecurityIdentifier::*)(::StringW)>(&System::Security::Principal::SecurityIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x230c168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t>, int32_t)>(&System::Security::Principal::SecurityIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x230c684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.CreateFromBinaryForm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::SecurityIdentifier::*)(::cordl_internals::intptr_t, int32_t)>(&System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x230c770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "CreateFromBinaryForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.get_BinaryLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::get_BinaryLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x230c8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "get_BinaryLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::get_Value)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x230c8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Principal::SecurityIdentifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.GetSidAuthority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::GetSidAuthority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x230cab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetSidAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.GetSidSubAuthorityCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x230cbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetSidSubAuthorityCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.GetSidSubAuthority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (System::Security::Principal::SecurityIdentifier::*)(uint8_t)>(&System::Security::Principal::SecurityIdentifier::GetSidSubAuthority)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x230cb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetSidSubAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Principal::SecurityIdentifier::*)(System::Security::Principal::SecurityIdentifier)>(&System::Security::Principal::SecurityIdentifier::CompareTo)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x230cbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Principal::SecurityIdentifier::*)(::bs_hook::Il2CppWrapperType)>(&System::Security::Principal::SecurityIdentifier::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x230cdb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Principal::SecurityIdentifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Principal::SecurityIdentifier::*)(System::Security::Principal::SecurityIdentifier)>(&System::Security::Principal::SecurityIdentifier::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x230ce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.GetBinaryForm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t>, int32_t)>(&System::Security::Principal::SecurityIdentifier::GetBinaryForm)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x230cebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetBinaryForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x230cf84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Principal::SecurityIdentifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::SecurityIdentifier::*)()>(&System::Security::Principal::SecurityIdentifier::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x230cfac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Principal::SecurityIdentifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.Translate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Principal::IdentityReference (System::Security::Principal::SecurityIdentifier::*)(System::Type)>(&System::Security::Principal::SecurityIdentifier::Translate)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x230cfb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Principal::SecurityIdentifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Principal::SecurityIdentifier, System::Security::Principal::SecurityIdentifier)>(&System::Security::Principal::SecurityIdentifier::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x230cd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.ParseSddlForm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Security::Principal::SecurityIdentifier::ParseSddlForm)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x230c224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "ParseSddlForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.TryParseAuthority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint64_t>)>(&System::Security::Principal::SecurityIdentifier::TryParseAuthority)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x230d364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "TryParseAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Principal::SecurityIdentifier.TryParseSubAuthority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint32_t>)>(&System::Security::Principal::SecurityIdentifier::TryParseSubAuthority)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x230d43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "TryParseSubAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IComparable_1<System::Security::Principal::SecurityIdentifier>
constexpr  System::Security::Principal::SecurityIdentifier::operator System::IComparable_1<System::Security::Principal::SecurityIdentifier>() const noexcept {
return System::IComparable_1<System::Security::Principal::SecurityIdentifier>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Principal::SecurityIdentifier::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Principal::SecurityIdentifier::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Principal::SecurityIdentifier::__set_MaxBinaryLength(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "MaxBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get>(std::forward<int32_t>(value));
}
 int32_t System::Security::Principal::SecurityIdentifier::__get_MaxBinaryLength()  {
return ::cordl_internals::getStaticField<int32_t, "MaxBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get>();
}
 void System::Security::Principal::SecurityIdentifier::__set_MinBinaryLength(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "MinBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get>(std::forward<int32_t>(value));
}
 int32_t System::Security::Principal::SecurityIdentifier::__get_MinBinaryLength()  {
return ::cordl_internals::getStaticField<int32_t, "MinBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get>();
}
 System::Security::Principal::SecurityIdentifier System::Security::Principal::SecurityIdentifier::New_ctor(::StringW sddlForm)  {
System::Security::Principal::SecurityIdentifier o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Principal::SecurityIdentifier>(sddlForm))};
return o;
}
 void System::Security::Principal::SecurityIdentifier::_ctor(::StringW sddlForm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sddlForm);
}
 System::Security::Principal::SecurityIdentifier System::Security::Principal::SecurityIdentifier::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
System::Security::Principal::SecurityIdentifier o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Principal::SecurityIdentifier>(binaryForm, offset))};
return o;
}
 void System::Security::Principal::SecurityIdentifier::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, offset);
}
 void System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm(::cordl_internals::intptr_t binaryForm, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "CreateFromBinaryForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, length);
}
 int32_t System::Security::Principal::SecurityIdentifier::get_BinaryLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "get_BinaryLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Principal::SecurityIdentifier::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 uint64_t System::Security::Principal::SecurityIdentifier::GetSidAuthority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetSidAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetSidSubAuthorityCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t System::Security::Principal::SecurityIdentifier::GetSidSubAuthority(uint8_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetSidSubAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t System::Security::Principal::SecurityIdentifier::CompareTo(System::Security::Principal::SecurityIdentifier sid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, sid);
}
 bool System::Security::Principal::SecurityIdentifier::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 bool System::Security::Principal::SecurityIdentifier::Equals(System::Security::Principal::SecurityIdentifier sid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sid);
}
 void System::Security::Principal::SecurityIdentifier::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetBinaryForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryForm, offset);
}
 int32_t System::Security::Principal::SecurityIdentifier::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Security::Principal::SecurityIdentifier::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Principal::IdentityReference System::Security::Principal::SecurityIdentifier::Translate(System::Type targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "Translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Principal::IdentityReference, false>(const_cast<void*>(instance), ___internal_method, targetType);
}
 bool System::Security::Principal::SecurityIdentifier::op_Equality(System::Security::Principal::SecurityIdentifier left, System::Security::Principal::SecurityIdentifier right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::SecurityIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 ::ArrayW<uint8_t> System::Security::Principal::SecurityIdentifier::ParseSddlForm(::StringW sddlForm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "ParseSddlForm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, sddlForm);
}
 bool System::Security::Principal::SecurityIdentifier::TryParseAuthority(::StringW s, ByRef<uint64_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "TryParseAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, result);
}
 bool System::Security::Principal::SecurityIdentifier::TryParseSubAuthority(::StringW s, ByRef<uint32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::SecurityIdentifier>::get(),
                            "TryParseSubAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, result);
}
