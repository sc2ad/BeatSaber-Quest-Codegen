#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCalApplicationFinalized_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithCalApplicationFinalized._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithCalApplicationFinalized::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCalApplicationFinalized::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCalApplicationFinalized>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCalApplicationFinalized.GetCalApplicationFinalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CalApplicationFinalized (Oculus::Platform::MessageWithCalApplicationFinalized::*)()>(&Oculus::Platform::MessageWithCalApplicationFinalized::GetCalApplicationFinalized)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2580728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCalApplicationFinalized),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCalApplicationFinalized>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCalApplicationFinalized.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CalApplicationFinalized (Oculus::Platform::MessageWithCalApplicationFinalized::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCalApplicationFinalized::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2580764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCalApplicationFinalized),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCalApplicationFinalized>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithCalApplicationFinalized::MessageWithCalApplicationFinalized(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationFinalized>(THROW_UNLESS(::il2cpp_utils::New<MessageWithCalApplicationFinalized>(c_message))) {}
 void Oculus::Platform::MessageWithCalApplicationFinalized::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCalApplicationFinalized>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::CalApplicationFinalized Oculus::Platform::MessageWithCalApplicationFinalized::GetCalApplicationFinalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCalApplicationFinalized>::get(),
                            "GetCalApplicationFinalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CalApplicationFinalized, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::CalApplicationFinalized Oculus::Platform::MessageWithCalApplicationFinalized::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCalApplicationFinalized>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CalApplicationFinalized, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
