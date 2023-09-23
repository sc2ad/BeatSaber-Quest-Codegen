#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::UnityEngine__UIElements__NavigationMoveEvent__Direction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction  UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::None{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction  UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::Left{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction  UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::Up{2};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction  UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::Right{3};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction  UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction::Down{4};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent.DetermineMoveDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction (*)(float_t, float_t, float_t)>(&UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2cdbb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "DetermineMoveDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent.get_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction (UnityEngine::UIElements::NavigationMoveEvent::*)()>(&UnityEngine::UIElements::NavigationMoveEvent::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdbb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent.set_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::NavigationMoveEvent::*)(UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction)>(&UnityEngine::UIElements::NavigationMoveEvent::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdbb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent.set_move
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::NavigationMoveEvent::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::NavigationMoveEvent::set_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdbb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "set_move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent.GetPooled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::NavigationMoveEvent (*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::NavigationMoveEvent::GetPooled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2cdbb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::NavigationMoveEvent::*)()>(&UnityEngine::UIElements::NavigationMoveEvent::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cdbc78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::NavigationMoveEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::NavigationMoveEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::NavigationMoveEvent::*)()>(&UnityEngine::UIElements::NavigationMoveEvent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cdbd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::NavigationMoveEvent::__set__direction_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction UnityEngine::UIElements::NavigationMoveEvent::__get__direction_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::NavigationMoveEvent::__set__move_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::NavigationMoveEvent::__get__move_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param deadZone: float_t (default: 0.6)
 UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction UnityEngine::UIElements::NavigationMoveEvent::DetermineMoveDirection(float_t x, float_t y, float_t deadZone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "DetermineMoveDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction, false>(nullptr, ___internal_method, x, y, deadZone);
}
 UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction UnityEngine::UIElements::NavigationMoveEvent::get_direction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::NavigationMoveEvent::set_direction(UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::NavigationMoveEvent::set_move(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "set_move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::NavigationMoveEvent UnityEngine::UIElements::NavigationMoveEvent::GetPooled(UnityEngine::Vector2 moveVector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::NavigationMoveEvent, false>(nullptr, ___internal_method, moveVector);
}
 void UnityEngine::UIElements::NavigationMoveEvent::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::NavigationMoveEvent::NavigationMoveEvent()  : UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationMoveEvent>(THROW_UNLESS(::il2cpp_utils::New<NavigationMoveEvent>())) {}
 void UnityEngine::UIElements::NavigationMoveEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationMoveEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
