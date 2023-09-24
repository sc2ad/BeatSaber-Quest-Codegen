#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
// Ctor Parameters [CppParam { name: "LocalEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RemoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::LiteNetLib__NatPunchModule__RequestEventData(System::Net::IPEndPoint LocalEndPoint, System::Net::IPEndPoint RemoteEndPoint, ::StringW Token) noexcept : ::bs_hook::ValueTypeWrapper() {this->LocalEndPoint = LocalEndPoint;
this->RemoteEndPoint = RemoteEndPoint;
this->Token = Token;
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::__set_LocalEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::__get_LocalEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::__set_RemoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x8>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::__get_RemoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x8>(this->__instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::__set_Token(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData::__get_Token() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
// Ctor Parameters [CppParam { name: "TargetEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Type", ty: "LiteNetLib::NatAddressType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::LiteNetLib__NatPunchModule__SuccessEventData(System::Net::IPEndPoint TargetEndPoint, LiteNetLib::NatAddressType Type, ::StringW Token) noexcept : ::bs_hook::ValueTypeWrapper() {this->TargetEndPoint = TargetEndPoint;
this->Type = Type;
this->Token = Token;
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::__set_TargetEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::__get_TargetEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::__set_Type(LiteNetLib::NatAddressType value)  {
::cordl_internals::setInstanceField<LiteNetLib::NatAddressType, 0x8>(this->__instance, std::forward<LiteNetLib::NatAddressType>(value));
}
constexpr LiteNetLib::NatAddressType LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::__get_Type() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NatAddressType, 0x8>(this->__instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::__set_Token(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData::__get_Token() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket.get_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208860c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "get_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket.set_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::*)(System::Net::IPEndPoint)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "set_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket.get_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208861c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket.set_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::*)(::StringW)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "set_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2087eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::__set__Internal_k__BackingField(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::__get__Internal_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::__set__Token_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::__get__Token_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::get_Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "get_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPEndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::set_Internal(System::Net::IPEndPoint value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "set_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::get_Token()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::set_Token(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            "set_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::New_ctor()  {
LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>())};
return o;
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket.get_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208862c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "get_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket.set_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)(System::Net::IPEndPoint)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "set_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket.get_External
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::get_External)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208863c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "get_External",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket.set_External
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)(System::Net::IPEndPoint)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::set_External)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "set_External",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket.get_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208864c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket.set_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)(::StringW)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "set_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20876e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::__set__Internal_k__BackingField(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::__get__Internal_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::__set__External_k__BackingField(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::__get__External_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::__set__Token_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::__get__Token_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::get_Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "get_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPEndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::set_Internal(System::Net::IPEndPoint value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "set_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::IPEndPoint LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::get_External()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "get_External",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPEndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::set_External(System::Net::IPEndPoint value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "set_External",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::get_Token()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::set_Token(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            "set_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::New_ctor()  {
LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>())};
return o;
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket.get_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208865c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket.set_Token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::*)(::StringW)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "set_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket.get_IsExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::get_IsExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208866c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "get_IsExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket.set_IsExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::*)(bool)>(&LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::set_IsExternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2088674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "set_IsExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::*)()>(&LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2088138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::__set__Token_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::__get__Token_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::__set__IsExternal_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::__get__IsExternal_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::get_Token()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "get_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::set_Token(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "set_Token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::get_IsExternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "get_IsExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::set_IsExternal(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            "set_IsExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::New_ctor()  {
LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>())};
return o;
}
 void LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::NatPunchModule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(LiteNetLib::NetSocket)>(&LiteNetLib::NatPunchModule::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2087218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetSocket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.ProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(System::Net::IPEndPoint, LiteNetLib::NetPacket)>(&LiteNetLib::NatPunchModule::ProcessMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x20874f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "ProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(LiteNetLib::INatPunchListener)>(&LiteNetLib::NatPunchModule::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208760c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::INatPunchListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.NatIntroduce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(System::Net::IPEndPoint, System::Net::IPEndPoint, System::Net::IPEndPoint, System::Net::IPEndPoint, ::StringW)>(&LiteNetLib::NatPunchModule::NatIntroduce)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2087614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "NatIntroduce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.PollEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)()>(&LiteNetLib::NatPunchModule::PollEvents)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x20876e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "PollEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.SendNatIntroduceRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(::StringW, int32_t, ::StringW)>(&LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2087a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "SendNatIntroduceRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.SendNatIntroduceRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(System::Net::IPEndPoint, ::StringW)>(&LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2087b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "SendNatIntroduceRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.OnNatIntroductionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket, System::Net::IPEndPoint)>(&LiteNetLib::NatPunchModule::OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2087ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "OnNatIntroductionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.OnNatIntroductionResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket)>(&LiteNetLib::NatPunchModule::OnNatIntroductionResponse)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2087fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "OnNatIntroductionResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NatPunchModule.OnNatPunch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::*)(LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket, System::Net::IPEndPoint)>(&LiteNetLib::NatPunchModule::OnNatPunch)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x20884bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "OnNatPunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::NatPunchModule::__set__socket(LiteNetLib::NetSocket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetSocket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetSocket>(value));
}
constexpr LiteNetLib::NetSocket LiteNetLib::NatPunchModule::__get__socket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetSocket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NatPunchModule::__set__requestEvents(System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData>>(value));
}
constexpr System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData> LiteNetLib::NatPunchModule::__get__requestEvents() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NatPunchModule::__set__successEvents(System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData>>(value));
}
constexpr System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData> LiteNetLib::NatPunchModule::__get__successEvents() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NatPunchModule::__set__cacheReader(LiteNetLib::Utils::NetDataReader value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataReader, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataReader>(value));
}
constexpr LiteNetLib::Utils::NetDataReader LiteNetLib::NatPunchModule::__get__cacheReader() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataReader, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NatPunchModule::__set__cacheWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter LiteNetLib::NatPunchModule::__get__cacheWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NatPunchModule::__set__netPacketProcessor(LiteNetLib::Utils::NetPacketProcessor value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetPacketProcessor>(value));
}
constexpr LiteNetLib::Utils::NetPacketProcessor LiteNetLib::NatPunchModule::__get__netPacketProcessor() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NatPunchModule::__set__natPunchListener(LiteNetLib::INatPunchListener value)  {
::cordl_internals::setInstanceField<LiteNetLib::INatPunchListener, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::INatPunchListener>(value));
}
constexpr LiteNetLib::INatPunchListener LiteNetLib::NatPunchModule::__get__natPunchListener() const {
return ::cordl_internals::getInstanceField<LiteNetLib::INatPunchListener, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::NatPunchModule LiteNetLib::NatPunchModule::New_ctor(LiteNetLib::NetSocket socket)  {
LiteNetLib::NatPunchModule o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::NatPunchModule>(socket))};
return o;
}
 void LiteNetLib::NatPunchModule::_ctor(LiteNetLib::NetSocket socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetSocket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, socket);
}
 void LiteNetLib::NatPunchModule::ProcessMessage(System::Net::IPEndPoint senderEndPoint, LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "ProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, senderEndPoint, packet);
}
 void LiteNetLib::NatPunchModule::Init(LiteNetLib::INatPunchListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::INatPunchListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, listener);
}
template<typename T>
 void LiteNetLib::NatPunchModule::Send(T packet, System::Net::IPEndPoint target)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                        "Send",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, target);
}
 void LiteNetLib::NatPunchModule::NatIntroduce(System::Net::IPEndPoint hostInternal, System::Net::IPEndPoint hostExternal, System::Net::IPEndPoint clientInternal, System::Net::IPEndPoint clientExternal, ::StringW additionalInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "NatIntroduce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hostInternal, hostExternal, clientInternal, clientExternal, additionalInfo);
}
 void LiteNetLib::NatPunchModule::PollEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "PollEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::NatPunchModule::SendNatIntroduceRequest(::StringW host, int32_t port, ::StringW additionalInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "SendNatIntroduceRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, host, port, additionalInfo);
}
 void LiteNetLib::NatPunchModule::SendNatIntroduceRequest(System::Net::IPEndPoint masterServerEndPoint, ::StringW additionalInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "SendNatIntroduceRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, masterServerEndPoint, additionalInfo);
}
 void LiteNetLib::NatPunchModule::OnNatIntroductionRequest(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket req, System::Net::IPEndPoint senderEndPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "OnNatIntroductionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, req, senderEndPoint);
}
 void LiteNetLib::NatPunchModule::OnNatIntroductionResponse(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket req)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "OnNatIntroductionResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, req);
}
 void LiteNetLib::NatPunchModule::OnNatPunch(LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket req, System::Net::IPEndPoint senderEndPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NatPunchModule>::get(),
                            "OnNatPunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, req, senderEndPoint);
}
