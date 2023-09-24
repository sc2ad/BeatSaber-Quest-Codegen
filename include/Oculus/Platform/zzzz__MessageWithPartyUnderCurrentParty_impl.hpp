#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPartyUnderCurrentParty_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithPartyUnderCurrentParty._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithPartyUnderCurrentParty::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithPartyUnderCurrentParty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257ed70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyUnderCurrentParty>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithPartyUnderCurrentParty.GetParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Party (Oculus::Platform::MessageWithPartyUnderCurrentParty::*)()>(&Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2582de0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithPartyUnderCurrentParty),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyUnderCurrentParty>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithPartyUnderCurrentParty.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Party (Oculus::Platform::MessageWithPartyUnderCurrentParty::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2582e1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithPartyUnderCurrentParty),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyUnderCurrentParty>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithPartyUnderCurrentParty Oculus::Platform::MessageWithPartyUnderCurrentParty::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithPartyUnderCurrentParty o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithPartyUnderCurrentParty>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithPartyUnderCurrentParty::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyUnderCurrentParty>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::Party Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyUnderCurrentParty>::get(),
                            "GetParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::Party, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::Party Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithPartyUnderCurrentParty>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::Party, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
