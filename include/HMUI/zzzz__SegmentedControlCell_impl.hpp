#pragma once
#include "HMUI/zzzz__SelectableCell_impl.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
//  Writing Method size for method: HMUI::SegmentedControlCell.get_cellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HMUI::SegmentedControlCell::*)()>(&HMUI::SegmentedControlCell::get_cellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fad124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "get_cellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControlCell.set_cellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)(int32_t)>(&HMUI::SegmentedControlCell::set_cellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fad12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "set_cellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControlCell.SegmentedControlSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)(HMUI::SegmentedControl, int32_t)>(&HMUI::SegmentedControlCell::SegmentedControlSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1faceb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "SegmentedControlSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SegmentedControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControlCell.InternalToggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)()>(&HMUI::SegmentedControlCell::InternalToggle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1fad134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::SegmentedControlCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControlCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControlCell::*)()>(&HMUI::SegmentedControlCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fac87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::SegmentedControlCell::__set__cellNumber_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::SegmentedControlCell::__get__cellNumber_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControlCell::__set__segmentedControl(HMUI::SegmentedControl value)  {
::cordl_internals::setInstanceField<HMUI::SegmentedControl, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::SegmentedControl>(value));
}
constexpr HMUI::SegmentedControl HMUI::SegmentedControlCell::__get__segmentedControl() const {
return ::cordl_internals::getInstanceField<HMUI::SegmentedControl, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t HMUI::SegmentedControlCell::get_cellNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "get_cellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SegmentedControlCell::set_cellNumber(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "set_cellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SegmentedControlCell::SegmentedControlSetup(HMUI::SegmentedControl segmentedControl, int32_t cellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "SegmentedControlSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SegmentedControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, segmentedControl, cellNumber);
}
 void HMUI::SegmentedControlCell::InternalToggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            "InternalToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::SegmentedControlCell::SegmentedControlCell()  : HMUI::SelectableCell(THROW_UNLESS(::il2cpp_utils::New<SegmentedControlCell>())) {}
 void HMUI::SegmentedControlCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControlCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
