#pragma once
#include "System/Xml/zzzz__XmlRawWriter_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/zzzz__XmlEventCache_def.hpp"
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType::System__Xml__XmlEventCache__XmlEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlEventCache__XmlEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlEventCache__XmlEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Unknown{0};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::DocType{1};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::StartElem{2};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::StartAttr{3};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::EndAttr{4};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::CData{5};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Comment{6};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::PI{7};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Whitespace{8};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::String{9};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Raw{10};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::EntRef{11};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::CharEnt{12};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::SurrCharEnt{13};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Base64{14};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::BinHex{15};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::XmlDecl1{16};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::XmlDecl2{17};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::StartContent{18};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::EndElem{19};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::FullEndElem{20};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Nmsp{21};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::EndBase64{22};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Close{23};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Flush{24};
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType  System::Xml::System__Xml__XmlEventCache__XmlEventType::Dispose{25};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.InitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType)>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.InitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW)>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c6c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.InitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW, ::StringW)>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c6c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.InitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW, ::StringW, ::StringW)>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c6c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.InitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW, ::StringW, ::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c6c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.InitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::bs_hook::Il2CppWrapperType)>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c6c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.get_EventType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlEventCache__XmlEventType (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)()>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::get_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_EventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.get_String1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)()>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::get_String1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_String1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.get_String2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)()>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::get_String2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_String2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.get_String3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)()>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::get_String3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_String3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlEventCache__XmlEvent.get_Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::System__Xml__XmlEventCache__XmlEvent::*)()>(&System::Xml::System__Xml__XmlEventCache__XmlEvent::get_Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "eventType", ty: "System::Xml::System__Xml__XmlEventCache__XmlEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "o", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr System::Xml::System__Xml__XmlEventCache__XmlEvent::System__Xml__XmlEventCache__XmlEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::bs_hook::Il2CppWrapperType o) noexcept : ::bs_hook::ValueTypeWrapper() {this->eventType = eventType;
this->s1 = s1;
this->s2 = s2;
this->s3 = s3;
this->o = o;
}
constexpr void System::Xml::System__Xml__XmlEventCache__XmlEvent::__set_eventType(System::Xml::System__Xml__XmlEventCache__XmlEventType value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlEventCache__XmlEventType, 0x0>(this->__instance, std::forward<System::Xml::System__Xml__XmlEventCache__XmlEventType>(value));
}
constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType System::Xml::System__Xml__XmlEventCache__XmlEvent::__get_eventType() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlEventCache__XmlEventType, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlEventCache__XmlEvent::__set_s1(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlEventCache__XmlEvent::__get_s1() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlEventCache__XmlEvent::__set_s2(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlEventCache__XmlEvent::__get_s2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlEventCache__XmlEvent::__set_s3(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlEventCache__XmlEvent::__get_s3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlEventCache__XmlEvent::__set_o(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Xml::System__Xml__XmlEventCache__XmlEvent::__get_o() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->__instance);
}
 void System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventType);
}
 void System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventType, s1);
}
 void System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventType, s1, s2);
}
 void System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventType, s1, s2, s3);
}
 void System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventType, s1, s2, s3, o);
}
 void System::Xml::System__Xml__XmlEventCache__XmlEvent::InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "InitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, eventType, o);
}
 System::Xml::System__Xml__XmlEventCache__XmlEventType System::Xml::System__Xml__XmlEventCache__XmlEvent::get_EventType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_EventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlEventCache__XmlEventType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Xml::System__Xml__XmlEventCache__XmlEvent::get_String1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_String1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Xml::System__Xml__XmlEventCache__XmlEvent::get_String2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_String2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Xml::System__Xml__XmlEventCache__XmlEvent::get_String3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_String3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Xml::System__Xml__XmlEventCache__XmlEvent::get_Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlEventCache__XmlEvent>::get(),
                            "get_Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Xml::XmlEventCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, bool)>(&System::Xml::XmlEventCache::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26c2b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.EndEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::EndEvents)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26c365c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "EndEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.EventsToWriter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::XmlWriter)>(&System::Xml::XmlEventCache::EventsToWriter)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x26c3670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "EventsToWriter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteDocType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteDocType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26c6394;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteStartElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteStartElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26c641c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteStartAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26c6494;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteEndAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c64a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteCData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteCData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c64b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteComment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c650c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteProcessingInstruction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c6518;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteWhitespace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c6584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26c6590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::XmlEventCache::WriteChars)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26c65b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::XmlEventCache::WriteRaw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26c65e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c6614;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteEntityRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteEntityRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c6620;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(char16_t)>(&System::Xml::XmlEventCache::WriteCharEntity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26c662c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteSurrogateCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(char16_t, char16_t)>(&System::Xml::XmlEventCache::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26c66e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Xml::XmlEventCache::WriteBase64)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26c6774;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteBinHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Xml::XmlEventCache::WriteBinHex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26c6854;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::Flush)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6888;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c6890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(bool)>(&System::Xml::XmlEventCache::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26c68a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteXmlDeclaration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::XmlStandalone)>(&System::Xml::XmlEventCache::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26c6950;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteXmlDeclaration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW)>(&System::Xml::XmlEventCache::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c69bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.StartElementContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::StartElementContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c69c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteEndElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26c69d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteFullEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26c69e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteNamespaceDeclaration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(::StringW, ::StringW)>(&System::Xml::XmlEventCache::WriteNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c69f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.WriteEndBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::WriteEndBase64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c6a08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlEventCache),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.AddEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType)>(&System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26c634c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.AddEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW)>(&System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26c64bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.AddEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26c6528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.AddEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26c6430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.AddEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::StringW, ::StringW, ::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26c63ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.AddEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEventCache::*)(System::Xml::System__Xml__XmlEventCache__XmlEventType, ::bs_hook::Il2CppWrapperType)>(&System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26c6698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.NewEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlEventCache::*)()>(&System::Xml::XmlEventCache::NewEvent)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x26c6a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "NewEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlEventCache.ToBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Xml::XmlEventCache::ToBytes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26c67a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlEventCache::__set_pages(System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>>>(value));
}
constexpr System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>> System::Xml::XmlEventCache::__get_pages() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlEventCache::__set_pageCurr(::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent> System::Xml::XmlEventCache::__get_pageCurr() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlEventCache::__set_pageSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlEventCache::__get_pageSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlEventCache::__set_hasRootNode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlEventCache::__get_hasRootNode() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlEventCache::__set_singleText(System::Xml::Xsl::Runtime::StringConcat value)  {
::cordl_internals::setInstanceField<System::Xml::Xsl::Runtime::StringConcat, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Xsl::Runtime::StringConcat>(value));
}
constexpr System::Xml::Xsl::Runtime::StringConcat System::Xml::XmlEventCache::__get_singleText() const {
return ::cordl_internals::getInstanceField<System::Xml::Xsl::Runtime::StringConcat, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlEventCache::__set_baseUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlEventCache::__get_baseUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "baseUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hasRootNode", ty: "bool", modifiers: "", def_value: None }]
 System::Xml::XmlEventCache::XmlEventCache(::StringW baseUri, bool hasRootNode)  : System::Xml::XmlRawWriter(THROW_UNLESS(::il2cpp_utils::New<XmlEventCache>(baseUri, hasRootNode))) {}
 void System::Xml::XmlEventCache::_ctor(::StringW baseUri, bool hasRootNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, hasRootNode);
}
 void System::Xml::XmlEventCache::EndEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "EndEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlEventCache::EventsToWriter(System::Xml::XmlWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "EventsToWriter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void System::Xml::XmlEventCache::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteDocType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, pubid, sysid, subset);
}
 void System::Xml::XmlEventCache::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteStartElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns);
}
 void System::Xml::XmlEventCache::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteStartAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns);
}
 void System::Xml::XmlEventCache::WriteEndAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteEndAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlEventCache::WriteCData(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteCData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::XmlEventCache::WriteComment(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::XmlEventCache::WriteProcessingInstruction(::StringW name, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteProcessingInstruction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, text);
}
 void System::Xml::XmlEventCache::WriteWhitespace(::StringW ws)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ws);
}
 void System::Xml::XmlEventCache::WriteString(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::XmlEventCache::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlEventCache::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlEventCache::WriteRaw(::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void System::Xml::XmlEventCache::WriteEntityRef(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Xml::XmlEventCache::WriteCharEntity(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 void System::Xml::XmlEventCache::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lowChar, highChar);
}
 void System::Xml::XmlEventCache::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlEventCache::WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteBinHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlEventCache::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlEventCache::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlEventCache::WriteValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::XmlEventCache::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Xml::XmlEventCache::WriteXmlDeclaration(System::Xml::XmlStandalone standalone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteXmlDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlStandalone>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, standalone);
}
 void System::Xml::XmlEventCache::WriteXmlDeclaration(::StringW xmldecl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteXmlDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmldecl);
}
 void System::Xml::XmlEventCache::StartElementContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "StartElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlEventCache::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns);
}
 void System::Xml::XmlEventCache::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns);
}
 void System::Xml::XmlEventCache::WriteNamespaceDeclaration(::StringW prefix, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteNamespaceDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, ns);
}
 void System::Xml::XmlEventCache::WriteEndBase64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "WriteEndBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlEventCache::AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventType);
}
 void System::Xml::XmlEventCache::AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventType, s1);
}
 void System::Xml::XmlEventCache::AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventType, s1, s2);
}
 void System::Xml::XmlEventCache::AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventType, s1, s2, s3);
}
 void System::Xml::XmlEventCache::AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventType, s1, s2, s3, o);
}
 void System::Xml::XmlEventCache::AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "AddEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlEventCache__XmlEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventType, o);
}
 int32_t System::Xml::XmlEventCache::NewEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "NewEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Xml::XmlEventCache::ToBytes(::ArrayW<uint8_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlEventCache>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, buffer, index, count);
}
