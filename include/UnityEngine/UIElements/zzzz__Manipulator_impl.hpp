#pragma once
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__IManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::Manipulator.RegisterCallbacksOnTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::Manipulator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Manipulator.UnregisterCallbacksFromTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::Manipulator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Manipulator.get_target
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::VisualElement (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c863c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            "get_target",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Manipulator.set_target
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::Manipulator::set_target)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c863d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            "set_target",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Manipulator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c86424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IManipulator
constexpr  UnityEngine::UIElements::Manipulator::operator UnityEngine::UIElements::IManipulator() const noexcept {
return UnityEngine::UIElements::IManipulator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::Manipulator::__set_m_Target(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::Manipulator::__get_m_Target() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::Manipulator::RegisterCallbacksOnTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            "RegisterCallbacksOnTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::Manipulator::UnregisterCallbacksFromTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            "UnregisterCallbacksFromTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::VisualElement UnityEngine::UIElements::Manipulator::get_target()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            "get_target",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::Manipulator::set_target(UnityEngine::UIElements::VisualElement value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            "set_target",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::UIElements::Manipulator::Manipulator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Manipulator>())) {}
 void UnityEngine::UIElements::Manipulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Manipulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
