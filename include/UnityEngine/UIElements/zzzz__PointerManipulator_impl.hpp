#pragma once
#include "UnityEngine/UIElements/zzzz__MouseManipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::PointerManipulator.CanStartManipulation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::PointerManipulator::*)(UnityEngine::UIElements::IPointerEvent)>(&UnityEngine::UIElements::PointerManipulator::CanStartManipulation)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2c453f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerManipulator>::get(),
                            "CanStartManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerManipulator.CanStopManipulation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::PointerManipulator::*)(UnityEngine::UIElements::IPointerEvent)>(&UnityEngine::UIElements::PointerManipulator::CanStopManipulation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c45830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerManipulator>::get(),
                            "CanStopManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerManipulator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerManipulator::*)()>(&UnityEngine::UIElements::PointerManipulator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c4449c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerManipulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::PointerManipulator::__set_m_CurrentPointerId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::PointerManipulator::__get_m_CurrentPointerId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::PointerManipulator::CanStartManipulation(UnityEngine::UIElements::IPointerEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerManipulator>::get(),
                            "CanStartManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e);
}
 bool UnityEngine::UIElements::PointerManipulator::CanStopManipulation(UnityEngine::UIElements::IPointerEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerManipulator>::get(),
                            "CanStopManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e);
}
// Ctor Parameters []
 UnityEngine::UIElements::PointerManipulator::PointerManipulator()  : UnityEngine::UIElements::MouseManipulator(THROW_UNLESS(::il2cpp_utils::New<PointerManipulator>())) {}
 void UnityEngine::UIElements::PointerManipulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerManipulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
