#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::*)(char16_t, char16_t, int32_t, int32_t)>(&System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27cb97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LcOp", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping(char16_t ChMin, char16_t ChMax, int32_t LcOp, int32_t Data) noexcept : ::bs_hook::ValueTypeWrapper() {this->ChMin = ChMin;
this->ChMax = ChMax;
this->LcOp = LcOp;
this->Data = Data;
}
constexpr void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__set_ChMin(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__get_ChMin() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__set_ChMax(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x2>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__get_ChMax() const {
return ::cordl_internals::getInstanceField<char16_t, 0x2>(this->__instance);
}
constexpr void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__set_LcOp(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__get_LcOp() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__set_Data(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::__get_Data() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping::_ctor(char16_t chMin, char16_t chMax, int32_t lcOp, int32_t data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, chMin, chMax, lcOp, data);
}
//  Writing Method size for method: System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::*)()>(&System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27cb98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::*)(System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange, System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange)>(&System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::Compare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27cb994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>
constexpr  System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::operator System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>() const noexcept {
return System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::__set_Instance(System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer value)  {
::cordl_internals::setStaticField<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>::get>(std::forward<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>(value));
}
 System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::__get_Instance()  {
return ::cordl_internals::getStaticField<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>::get>();
}
// Ctor Parameters []
 System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>())) {}
 void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer::Compare(System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange x, System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRangeComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
//  Writing Method size for method: System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::*)(char16_t, char16_t)>(&System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27cba18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::System__Text__RegularExpressions__RegexCharClass__SingleRange(char16_t First, char16_t Last) noexcept : ::bs_hook::ValueTypeWrapper() {this->First = First;
this->Last = Last;
}
constexpr void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::__set_First(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::__get_First() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::__set_Last(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x2>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::__get_Last() const {
return ::cordl_internals::getInstanceField<char16_t, 0x2>(this->__instance);
}
 void System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange::_ctor(char16_t first, char16_t last)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, first, last);
}
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)()>(&System::Text::RegularExpressions::RegexCharClass::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27c24d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(bool, System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>, System::Text::StringBuilder, System::Text::RegularExpressions::RegexCharClass)>(&System::Text::RegularExpressions::RegexCharClass::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27c258c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexCharClass>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.get_CanMerge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexCharClass::*)()>(&System::Text::RegularExpressions::RegexCharClass::get_CanMerge)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27c25d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "get_CanMerge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.set_Negate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(bool)>(&System::Text::RegularExpressions::RegexCharClass::set_Negate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27c25f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "set_Negate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(char16_t)>(&System::Text::RegularExpressions::RegexCharClass::AddChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c2604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddCharClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(System::Text::RegularExpressions::RegexCharClass)>(&System::Text::RegularExpressions::RegexCharClass::AddCharClass)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x27c272c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddCharClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexCharClass>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::AddSet)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x27c2948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddSubtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(System::Text::RegularExpressions::RegexCharClass)>(&System::Text::RegularExpressions::RegexCharClass::AddSubtraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c2b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddSubtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexCharClass>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(char16_t, char16_t)>(&System::Text::RegularExpressions::RegexCharClass::AddRange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x27c260c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddCategoryFromName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(::StringW, bool, bool, ::StringW)>(&System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27c2b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddCategoryFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::AddCategory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27c3078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddLowercase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(System::Globalization::CultureInfo)>(&System::Text::RegularExpressions::RegexCharClass::AddLowercase)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x27c3094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddLowercase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddLowercaseRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(char16_t, char16_t, System::Globalization::CultureInfo)>(&System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x27c31d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddLowercaseRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(bool, bool)>(&System::Text::RegularExpressions::RegexCharClass::AddWord)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27c3400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(bool, bool)>(&System::Text::RegularExpressions::RegexCharClass::AddSpace)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27c34f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.AddDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)(bool, bool, ::StringW)>(&System::Text::RegularExpressions::RegexCharClass::AddDigit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27c35e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.SingletonChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::SingletonChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27c369c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "SingletonChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsMergeable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::IsMergeable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27c36b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsMergeable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::IsEmpty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27c37d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsSingleton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::IsSingleton)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x27c3890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsSingletonInverse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27c399c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsSingletonInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsSubtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::IsSubtraction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27c3778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsSubtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsNegated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::IsNegated)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27c3750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsNegated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsECMAWordChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27c3aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsECMAWordChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.IsWordChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Text::RegularExpressions::RegexCharClass::IsWordChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27c3b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsWordChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.CharInClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW)>(&System::Text::RegularExpressions::RegexCharClass::CharInClass)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27c3b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.CharInClassRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW, int32_t)>(&System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x27c3c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInClassRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.CharInClassInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW, int32_t, int32_t, int32_t)>(&System::Text::RegularExpressions::RegexCharClass::CharInClassInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27c3d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInClassInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.CharInCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW, int32_t, int32_t, int32_t)>(&System::Text::RegularExpressions::RegexCharClass::CharInCategory)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x27c3e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.CharInCategoryGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, System::Globalization::UnicodeCategory, ::StringW, ByRef<int32_t>)>(&System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27c3fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInCategoryGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::UnicodeCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.NegateCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::NegateCategory)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27c2d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "NegateCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexCharClass (*)(::StringW)>(&System::Text::RegularExpressions::RegexCharClass::Parse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27c4090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.ParseRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexCharClass (*)(::StringW, int32_t)>(&System::Text::RegularExpressions::RegexCharClass::ParseRecursive)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x27c40e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "ParseRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.RangeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::RegularExpressions::RegexCharClass::*)()>(&System::Text::RegularExpressions::RegexCharClass::RangeCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27c28a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "RangeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.ToStringClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::RegexCharClass::*)()>(&System::Text::RegularExpressions::RegexCharClass::ToStringClass)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x27c4370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "ToStringClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.GetRangeAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange (System::Text::RegularExpressions::RegexCharClass::*)(int32_t)>(&System::Text::RegularExpressions::RegexCharClass::GetRangeAt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27c28e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "GetRangeAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.Canonicalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexCharClass::*)()>(&System::Text::RegularExpressions::RegexCharClass::Canonicalize)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x27c450c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "Canonicalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexCharClass.SetFromProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool, ::StringW)>(&System::Text::RegularExpressions::RegexCharClass::SetFromProperty)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x27c2e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "SetFromProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Text::RegularExpressions::RegexCharClass::__set_s_internalRegexIgnoreCase(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_internalRegexIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_s_internalRegexIgnoreCase()  {
return ::cordl_internals::getStaticField<::StringW, "s_internalRegexIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_space(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_space", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_s_space()  {
return ::cordl_internals::getStaticField<::StringW, "s_space", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_notSpace(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_notSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_s_notSpace()  {
return ::cordl_internals::getStaticField<::StringW, "s_notSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_word(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_word", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_s_word()  {
return ::cordl_internals::getStaticField<::StringW, "s_word", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_notWord(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_notWord", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_s_notWord()  {
return ::cordl_internals::getStaticField<::StringW, "s_notWord", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_SpaceClass(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "SpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_SpaceClass()  {
return ::cordl_internals::getStaticField<::StringW, "SpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_NotSpaceClass(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "NotSpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_NotSpaceClass()  {
return ::cordl_internals::getStaticField<::StringW, "NotSpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_WordClass(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "WordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_WordClass()  {
return ::cordl_internals::getStaticField<::StringW, "WordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_NotWordClass(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "NotWordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_NotWordClass()  {
return ::cordl_internals::getStaticField<::StringW, "NotWordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_DigitClass(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_DigitClass()  {
return ::cordl_internals::getStaticField<::StringW, "DigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_NotDigitClass(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "NotDigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::__get_NotDigitClass()  {
return ::cordl_internals::getStaticField<::StringW, "NotDigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_definedCategories(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_definedCategories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> System::Text::RegularExpressions::RegexCharClass::__get_s_definedCategories()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_definedCategories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_propTable(::ArrayW<::ArrayW<::StringW>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW>>, "s_propTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::ArrayW<::ArrayW<::StringW>>>(value));
}
 ::ArrayW<::ArrayW<::StringW>> System::Text::RegularExpressions::RegexCharClass::__get_s_propTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW>>, "s_propTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
 void System::Text::RegularExpressions::RegexCharClass::__set_s_lcTable(::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping>, "s_lcTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>(std::forward<::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping>>(value));
}
 ::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping> System::Text::RegularExpressions::RegexCharClass::__get_s_lcTable()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__LowerCaseMapping>, "s_lcTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get>();
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__set__rangelist(System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>>(value));
}
constexpr System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange> System::Text::RegularExpressions::RegexCharClass::__get__rangelist() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__set__categories(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Text::RegularExpressions::RegexCharClass::__get__categories() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__set__canonical(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::RegularExpressions::RegexCharClass::__get__canonical() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__set__negate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::RegularExpressions::RegexCharClass::__get__negate() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__set__subtractor(System::Text::RegularExpressions::RegexCharClass value)  {
::cordl_internals::setInstanceField<System::Text::RegularExpressions::RegexCharClass, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::RegularExpressions::RegexCharClass>(value));
}
constexpr System::Text::RegularExpressions::RegexCharClass System::Text::RegularExpressions::RegexCharClass::__get__subtractor() const {
return ::cordl_internals::getInstanceField<System::Text::RegularExpressions::RegexCharClass, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Text::RegularExpressions::RegexCharClass::RegexCharClass()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RegexCharClass>())) {}
 void System::Text::RegularExpressions::RegexCharClass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ranges", ty: "System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>", modifiers: "", def_value: None }, CppParam { name: "categories", ty: "System::Text::StringBuilder", modifiers: "", def_value: None }, CppParam { name: "subtraction", ty: "System::Text::RegularExpressions::RegexCharClass", modifiers: "", def_value: None }]
 System::Text::RegularExpressions::RegexCharClass::RegexCharClass(bool negate, System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange> ranges, System::Text::StringBuilder categories, System::Text::RegularExpressions::RegexCharClass subtraction)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RegexCharClass>(negate, ranges, categories, subtraction))) {}
 void System::Text::RegularExpressions::RegexCharClass::_ctor(bool negate, System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange> ranges, System::Text::StringBuilder categories, System::Text::RegularExpressions::RegexCharClass subtraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexCharClass>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, negate, ranges, categories, subtraction);
}
 bool System::Text::RegularExpressions::RegexCharClass::get_CanMerge()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "get_CanMerge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::RegularExpressions::RegexCharClass::set_Negate(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "set_Negate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Text::RegularExpressions::RegexCharClass::AddChar(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void System::Text::RegularExpressions::RegexCharClass::AddCharClass(System::Text::RegularExpressions::RegexCharClass cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddCharClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexCharClass>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cc);
}
 void System::Text::RegularExpressions::RegexCharClass::AddSet(::StringW set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, set);
}
 void System::Text::RegularExpressions::RegexCharClass::AddSubtraction(System::Text::RegularExpressions::RegexCharClass sub)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddSubtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexCharClass>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sub);
}
 void System::Text::RegularExpressions::RegexCharClass::AddRange(char16_t first, char16_t last)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, first, last);
}
 void System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName(::StringW categoryName, bool invert, bool caseInsensitive, ::StringW pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddCategoryFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, categoryName, invert, caseInsensitive, pattern);
}
 void System::Text::RegularExpressions::RegexCharClass::AddCategory(::StringW category)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, category);
}
 void System::Text::RegularExpressions::RegexCharClass::AddLowercase(System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddLowercase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture);
}
 void System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange(char16_t chMin, char16_t chMax, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddLowercaseRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chMin, chMax, culture);
}
 void System::Text::RegularExpressions::RegexCharClass::AddWord(bool ecma, bool negate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ecma, negate);
}
 void System::Text::RegularExpressions::RegexCharClass::AddSpace(bool ecma, bool negate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ecma, negate);
}
 void System::Text::RegularExpressions::RegexCharClass::AddDigit(bool ecma, bool negate, ::StringW pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "AddDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ecma, negate, pattern);
}
 char16_t System::Text::RegularExpressions::RegexCharClass::SingletonChar(::StringW set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "SingletonChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, set);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsMergeable(::StringW charClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsMergeable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charClass);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsEmpty(::StringW charClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charClass);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsSingleton(::StringW set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse(::StringW set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsSingletonInverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsSubtraction(::StringW charClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsSubtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charClass);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsNegated(::StringW set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsNegated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsECMAWordChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::Text::RegularExpressions::RegexCharClass::IsWordChar(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "IsWordChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::Text::RegularExpressions::RegexCharClass::CharInClass(char16_t ch, ::StringW set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set);
}
 bool System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive(char16_t ch, ::StringW set, int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInClassRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set, start);
}
 bool System::Text::RegularExpressions::RegexCharClass::CharInClassInternal(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInClassInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set, start, mySetLength, myCategoryLength);
}
 bool System::Text::RegularExpressions::RegexCharClass::CharInCategory(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set, start, mySetLength, myCategoryLength);
}
 bool System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup(char16_t ch, System::Globalization::UnicodeCategory chcategory, ::StringW category, ByRef<int32_t> i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "CharInCategoryGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::UnicodeCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, chcategory, category, i);
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::NegateCategory(::StringW category)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "NegateCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, category);
}
 System::Text::RegularExpressions::RegexCharClass System::Text::RegularExpressions::RegexCharClass::Parse(::StringW charClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::RegexCharClass, false>(nullptr, ___internal_method, charClass);
}
 System::Text::RegularExpressions::RegexCharClass System::Text::RegularExpressions::RegexCharClass::ParseRecursive(::StringW charClass, int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "ParseRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::RegexCharClass, false>(nullptr, ___internal_method, charClass, start);
}
 int32_t System::Text::RegularExpressions::RegexCharClass::RangeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "RangeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::ToStringClass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "ToStringClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange System::Text::RegularExpressions::RegexCharClass::GetRangeAt(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "GetRangeAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::System__Text__RegularExpressions__RegexCharClass__SingleRange, false>(const_cast<void*>(instance), ___internal_method, i);
}
 void System::Text::RegularExpressions::RegexCharClass::Canonicalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "Canonicalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Text::RegularExpressions::RegexCharClass::SetFromProperty(::StringW capname, bool invert, ::StringW pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexCharClass>::get(),
                            "SetFromProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, capname, invert, pattern);
}
