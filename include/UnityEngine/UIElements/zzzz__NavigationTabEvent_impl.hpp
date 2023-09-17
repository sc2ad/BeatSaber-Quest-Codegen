#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__NavigationTabEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction::____UnityEngine__UIElements__NavigationTabEvent__Direction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction  ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction::None{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction  ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction::Next{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction  ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction::Previous{2};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.set_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationTabEvent::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction)>(&::UnityEngine::UIElements::NavigationTabEvent::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdbd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.DetermineMoveDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction (*)(int32_t)>(&::UnityEngine::UIElements::NavigationTabEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cdbd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "DetermineMoveDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.GetPooled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationTabEvent (*)(int32_t)>(&::UnityEngine::UIElements::NavigationTabEvent::GetPooled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cdbd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationTabEvent::*)()>(&::UnityEngine::UIElements::NavigationTabEvent::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2cdbe08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::NavigationTabEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationTabEvent::*)()>(&::UnityEngine::UIElements::NavigationTabEvent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cdbe58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::NavigationTabEvent::__set__direction_k__BackingField(::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction ::UnityEngine::UIElements::NavigationTabEvent::__get__direction_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::NavigationTabEvent::set_direction(::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction ::UnityEngine::UIElements::NavigationTabEvent::DetermineMoveDirection(int32_t moveValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "DetermineMoveDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__NavigationTabEvent__Direction, false>(nullptr, ___internal_method, moveValue);
}
 ::UnityEngine::UIElements::NavigationTabEvent ::UnityEngine::UIElements::NavigationTabEvent::GetPooled(int32_t moveValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationTabEvent, false>(nullptr, ___internal_method, moveValue);
}
 void ::UnityEngine::UIElements::NavigationTabEvent::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::NavigationTabEvent::NavigationTabEvent()  : ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationTabEvent>(THROW_UNLESS(::il2cpp_utils::New<NavigationTabEvent>())) {}
 void ::UnityEngine::UIElements::NavigationTabEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
