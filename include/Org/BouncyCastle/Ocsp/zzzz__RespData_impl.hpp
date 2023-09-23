#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespData_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::RespData::*)(Org::BouncyCastle::Asn1::Ocsp::ResponseData)>(&Org::BouncyCastle::Ocsp::RespData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x10101d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Ocsp::ResponseData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Ocsp::RespData::*)()>(&Org::BouncyCastle::Ocsp::RespData::get_Version)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1018994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData.GetResponderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::RespID (Org::BouncyCastle::Ocsp::RespData::*)()>(&Org::BouncyCastle::Ocsp::RespData::GetResponderId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10189c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "GetResponderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData.get_ProducedAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Ocsp::RespData::*)()>(&Org::BouncyCastle::Ocsp::RespData::get_ProducedAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1018a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "get_ProducedAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData.GetResponses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Ocsp::SingleResp> (Org::BouncyCastle::Ocsp::RespData::*)()>(&Org::BouncyCastle::Ocsp::RespData::GetResponses)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1018a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "GetResponses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData.get_ResponseExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions (Org::BouncyCastle::Ocsp::RespData::*)()>(&Org::BouncyCastle::Ocsp::RespData::get_ResponseExtensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1018b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "get_ResponseExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::RespData.GetX509Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions (Org::BouncyCastle::Ocsp::RespData::*)()>(&Org::BouncyCastle::Ocsp::RespData::GetX509Extensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1018ba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Ocsp::RespData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Ocsp::RespData::__set_data(Org::BouncyCastle::Asn1::Ocsp::ResponseData value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Ocsp::ResponseData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Ocsp::ResponseData>(value));
}
constexpr Org::BouncyCastle::Asn1::Ocsp::ResponseData Org::BouncyCastle::Ocsp::RespData::__get_data() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Ocsp::ResponseData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "data", ty: "Org::BouncyCastle::Asn1::Ocsp::ResponseData", modifiers: "", def_value: None }]
 Org::BouncyCastle::Ocsp::RespData::RespData(Org::BouncyCastle::Asn1::Ocsp::ResponseData data)  : Org::BouncyCastle::X509::X509ExtensionBase(THROW_UNLESS(::il2cpp_utils::New<RespData>(data))) {}
 void Org::BouncyCastle::Ocsp::RespData::_ctor(Org::BouncyCastle::Asn1::Ocsp::ResponseData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Ocsp::ResponseData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 int32_t Org::BouncyCastle::Ocsp::RespData::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Ocsp::RespID Org::BouncyCastle::Ocsp::RespData::GetResponderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "GetResponderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::RespID, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::Ocsp::RespData::get_ProducedAt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "get_ProducedAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::Ocsp::SingleResp> Org::BouncyCastle::Ocsp::RespData::GetResponses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "GetResponses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Ocsp::SingleResp>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Ocsp::RespData::get_ResponseExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "get_ResponseExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Ocsp::RespData::GetX509Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::RespData>::get(),
                            "GetX509Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
