#pragma once
namespace {
#include "System/Net/zzzz__KnownHttpVerb_def.hpp"
#include "System/Collections/Specialized/zzzz__ListDictionary_def.hpp"
//  Writing Method size for method: ::System::Net::KnownHttpVerb._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::KnownHttpVerb::*)(::StringW, bool, bool, bool, bool)>(&::System::Net::KnownHttpVerb::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x280cef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::KnownHttpVerb.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::KnownHttpVerb (*)(::StringW)>(&::System::Net::KnownHttpVerb::Parse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x280d268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::KnownHttpVerb::__set_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::KnownHttpVerb::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::KnownHttpVerb::__set_RequireContentBody(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::KnownHttpVerb::__get_RequireContentBody() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::KnownHttpVerb::__set_ContentBodyNotAllowed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::KnownHttpVerb::__get_ContentBodyNotAllowed() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::KnownHttpVerb::__set_ConnectRequest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::KnownHttpVerb::__get_ConnectRequest() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::KnownHttpVerb::__set_ExpectNoContentResponse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::KnownHttpVerb::__get_ExpectNoContentResponse() const {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Net::KnownHttpVerb::__set_NamedHeaders(::System::Collections::Specialized::ListDictionary value)  {
::cordl_internals::setStaticField<::System::Collections::Specialized::ListDictionary, "NamedHeaders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Collections::Specialized::ListDictionary>(value));
}
 ::System::Collections::Specialized::ListDictionary ::System::Net::KnownHttpVerb::__get_NamedHeaders()  {
return ::cordl_internals::getStaticField<::System::Collections::Specialized::ListDictionary, "NamedHeaders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
 void ::System::Net::KnownHttpVerb::__set_Get(::System::Net::KnownHttpVerb value)  {
::cordl_internals::setStaticField<::System::Net::KnownHttpVerb, "Get", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Net::KnownHttpVerb>(value));
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::__get_Get()  {
return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb, "Get", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
 void ::System::Net::KnownHttpVerb::__set_Connect(::System::Net::KnownHttpVerb value)  {
::cordl_internals::setStaticField<::System::Net::KnownHttpVerb, "Connect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Net::KnownHttpVerb>(value));
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::__get_Connect()  {
return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb, "Connect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
 void ::System::Net::KnownHttpVerb::__set_Head(::System::Net::KnownHttpVerb value)  {
::cordl_internals::setStaticField<::System::Net::KnownHttpVerb, "Head", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Net::KnownHttpVerb>(value));
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::__get_Head()  {
return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb, "Head", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
 void ::System::Net::KnownHttpVerb::__set_Put(::System::Net::KnownHttpVerb value)  {
::cordl_internals::setStaticField<::System::Net::KnownHttpVerb, "Put", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Net::KnownHttpVerb>(value));
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::__get_Put()  {
return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb, "Put", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
 void ::System::Net::KnownHttpVerb::__set_Post(::System::Net::KnownHttpVerb value)  {
::cordl_internals::setStaticField<::System::Net::KnownHttpVerb, "Post", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Net::KnownHttpVerb>(value));
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::__get_Post()  {
return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb, "Post", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
 void ::System::Net::KnownHttpVerb::__set_MkCol(::System::Net::KnownHttpVerb value)  {
::cordl_internals::setStaticField<::System::Net::KnownHttpVerb, "MkCol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>(std::forward<::System::Net::KnownHttpVerb>(value));
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::__get_MkCol()  {
return ::cordl_internals::getStaticField<::System::Net::KnownHttpVerb, "MkCol", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get>();
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "requireContentBody", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "contentBodyNotAllowed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "connectRequest", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "expectNoContentResponse", ty: "bool", modifiers: "", def_value: None }]
 ::System::Net::KnownHttpVerb::KnownHttpVerb(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KnownHttpVerb>(name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse))) {}
 void ::System::Net::KnownHttpVerb::_ctor(::StringW name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse);
}
 ::System::Net::KnownHttpVerb ::System::Net::KnownHttpVerb::Parse(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::KnownHttpVerb>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::KnownHttpVerb, false>(nullptr, ___internal_method, name);
}
} // end anonymous namespace
