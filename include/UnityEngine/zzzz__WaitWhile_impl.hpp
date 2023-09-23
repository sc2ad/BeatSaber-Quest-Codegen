#pragma once
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitWhile_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: UnityEngine::WaitWhile.get_keepWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::WaitWhile::*)()>(&UnityEngine::WaitWhile::get_keepWaiting)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b5c08c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::WaitWhile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitWhile>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::WaitWhile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::WaitWhile::*)(System::Func_1<bool>)>(&UnityEngine::WaitWhile::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b5c0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitWhile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::WaitWhile::__set_m_Predicate(System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<System::Func_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<bool>>(value));
}
constexpr System::Func_1<bool> UnityEngine::WaitWhile::__get_m_Predicate() const {
return ::cordl_internals::getInstanceField<System::Func_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::WaitWhile::get_keepWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitWhile>::get(),
                            "get_keepWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "predicate", ty: "System::Func_1<bool>", modifiers: "", def_value: None }]
 UnityEngine::WaitWhile::WaitWhile(System::Func_1<bool> predicate)  : UnityEngine::CustomYieldInstruction(THROW_UNLESS(::il2cpp_utils::New<WaitWhile>(predicate))) {}
 void UnityEngine::WaitWhile::_ctor(System::Func_1<bool> predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::WaitWhile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, predicate);
}
