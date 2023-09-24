#pragma once
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: UnityEngine::WaitUntil.get_keepWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::WaitUntil::*)()>(&UnityEngine::WaitUntil::get_keepWaiting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b57c64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::WaitUntil),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitUntil>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::WaitUntil._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WaitUntil::*)(System::Func_1<bool>)>(&UnityEngine::WaitUntil::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b57c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitUntil>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::WaitUntil::__set_m_Predicate(System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<System::Func_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<bool>>(value));
}
constexpr System::Func_1<bool> UnityEngine::WaitUntil::__get_m_Predicate() const {
return ::cordl_internals::getInstanceField<System::Func_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::WaitUntil::get_keepWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitUntil>::get(),
                            "get_keepWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::WaitUntil UnityEngine::WaitUntil::New_ctor(System::Func_1<bool> predicate)  {
UnityEngine::WaitUntil o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::WaitUntil>(predicate))};
return o;
}
 void UnityEngine::WaitUntil::_ctor(System::Func_1<bool> predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitUntil>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, predicate);
}
