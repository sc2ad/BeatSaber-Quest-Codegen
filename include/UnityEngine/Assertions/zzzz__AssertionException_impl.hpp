#pragma once
#include "System/zzzz__Exception_impl.hpp"
namespace {
#include "UnityEngine/Assertions/zzzz__AssertionException_def.hpp"
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Assertions::AssertionException::*)(::StringW, ::StringW)>(&::UnityEngine::Assertions::AssertionException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b712a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionException.get_Message
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Assertions::AssertionException::*)()>(&::UnityEngine::Assertions::AssertionException::get_Message)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b719b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Assertions::AssertionException),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Assertions::AssertionException::__set_m_UserMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::Assertions::AssertionException::__get_m_UserMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userMessage", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::Assertions::AssertionException::AssertionException(::StringW message, ::StringW userMessage)  : ::System::Exception(THROW_UNLESS(::il2cpp_utils::New<AssertionException>(message, userMessage))) {}
 void ::UnityEngine::Assertions::AssertionException::_ctor(::StringW message, ::StringW userMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, userMessage);
}
 ::StringW ::UnityEngine::Assertions::AssertionException::get_Message()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException>::get(),
                            "get_Message",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
