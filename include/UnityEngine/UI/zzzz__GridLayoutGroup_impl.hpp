#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_impl.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::UnityEngine__UI__GridLayoutGroup__Corner(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::UpperLeft{0};
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::UpperRight{1};
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::LowerLeft{2};
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner::LowerRight{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis::UnityEngine__UI__GridLayoutGroup__Axis(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis::Horizontal{0};
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis::Vertical{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint::UnityEngine__UI__GridLayoutGroup__Constraint(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint::Flexible{0};
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint::FixedColumnCount{1};
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint  UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint::FixedRowCount{2};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.get_startCorner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_startCorner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfb93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_startCorner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.set_startCorner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner)>(&UnityEngine::UI::GridLayoutGroup::set_startCorner)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bfb944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_startCorner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.get_startAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_startAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfb9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_startAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.set_startAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis)>(&UnityEngine::UI::GridLayoutGroup::set_startAxis)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bfb9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_startAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.get_cellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_cellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfba04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_cellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.set_cellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(UnityEngine::Vector2)>(&UnityEngine::UI::GridLayoutGroup::set_cellSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bfba0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_cellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.get_spacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_spacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfba70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_spacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.set_spacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(UnityEngine::Vector2)>(&UnityEngine::UI::GridLayoutGroup::set_spacing)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bfba78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_spacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.get_constraint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_constraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfbadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_constraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.set_constraint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint)>(&UnityEngine::UI::GridLayoutGroup::set_constraint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bfbae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_constraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.get_constraintCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_constraintCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfbb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_constraintCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.set_constraintCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(int32_t)>(&UnityEngine::UI::GridLayoutGroup::set_constraintCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bfbb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_constraintCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bfbba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.CalculateLayoutInputHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2bfbd3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GridLayoutGroup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.CalculateLayoutInputVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2bfc348;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GridLayoutGroup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.SetLayoutHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfc604;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GridLayoutGroup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.SetLayoutVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfcbe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GridLayoutGroup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GridLayoutGroup.SetCellsAlongAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(int32_t)>(&UnityEngine::UI::GridLayoutGroup::SetCellsAlongAxis)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x2bfc60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "SetCellsAlongAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UI::GridLayoutGroup::__set_m_StartCorner(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner UnityEngine::UI::GridLayoutGroup::__get_m_StartCorner() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GridLayoutGroup::__set_m_StartAxis(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis UnityEngine::UI::GridLayoutGroup::__get_m_StartAxis() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GridLayoutGroup::__set_m_CellSize(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UI::GridLayoutGroup::__get_m_CellSize() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GridLayoutGroup::__set_m_Spacing(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UI::GridLayoutGroup::__get_m_Spacing() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GridLayoutGroup::__set_m_Constraint(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint UnityEngine::UI::GridLayoutGroup::__get_m_Constraint() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GridLayoutGroup::__set_m_ConstraintCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::GridLayoutGroup::__get_m_ConstraintCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner UnityEngine::UI::GridLayoutGroup::get_startCorner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_startCorner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::set_startCorner(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_startCorner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Corner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis UnityEngine::UI::GridLayoutGroup::get_startAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_startAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::set_startAxis(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_startAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Axis>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UI::GridLayoutGroup::get_cellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_cellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::set_cellSize(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_cellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UI::GridLayoutGroup::get_spacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_spacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::set_spacing(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_spacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint UnityEngine::UI::GridLayoutGroup::get_constraint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_constraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::set_constraint(UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_constraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GridLayoutGroup__Constraint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UI::GridLayoutGroup::get_constraintCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "get_constraintCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::set_constraintCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "set_constraintCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::GridLayoutGroup UnityEngine::UI::GridLayoutGroup::New_ctor()  {
UnityEngine::UI::GridLayoutGroup o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UI::GridLayoutGroup>())};
return o;
}
 void UnityEngine::UI::GridLayoutGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "CalculateLayoutInputHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "CalculateLayoutInputVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "SetLayoutHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "SetLayoutVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GridLayoutGroup::SetCellsAlongAxis(int32_t axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GridLayoutGroup>::get(),
                            "SetCellsAlongAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, axis);
}
