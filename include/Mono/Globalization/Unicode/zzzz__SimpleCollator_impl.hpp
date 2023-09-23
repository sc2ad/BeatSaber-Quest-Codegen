#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__SortKeyBuffer_def.hpp"
//  Writing Method size for method: Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::*)(System::Globalization::CompareOptions, void*, void*, void*, void*, void*)>(&Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22abec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Option", ty: "System::Globalization::CompareOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "NeverMatchFlags", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "AlwaysMatchFlags", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Buffer1", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Buffer2", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PrevCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrevSortKey", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::Mono__Globalization__Unicode__SimpleCollator__Context(System::Globalization::CompareOptions Option, void* NeverMatchFlags, void* AlwaysMatchFlags, void* Buffer1, void* Buffer2, int32_t PrevCode, void* PrevSortKey) noexcept : ::bs_hook::ValueTypeWrapper() {this->Option = Option;
this->NeverMatchFlags = NeverMatchFlags;
this->AlwaysMatchFlags = AlwaysMatchFlags;
this->Buffer1 = Buffer1;
this->Buffer2 = Buffer2;
this->PrevCode = PrevCode;
this->PrevSortKey = PrevSortKey;
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_Option(System::Globalization::CompareOptions value)  {
::cordl_internals::setInstanceField<System::Globalization::CompareOptions, 0x0>(this->__instance, std::forward<System::Globalization::CompareOptions>(value));
}
constexpr System::Globalization::CompareOptions Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_Option() const {
return ::cordl_internals::getInstanceField<System::Globalization::CompareOptions, 0x0>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_NeverMatchFlags(void* value)  {
::cordl_internals::setInstanceField<void*, 0x8>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_NeverMatchFlags() const {
return ::cordl_internals::getInstanceField<void*, 0x8>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_AlwaysMatchFlags(void* value)  {
::cordl_internals::setInstanceField<void*, 0x10>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_AlwaysMatchFlags() const {
return ::cordl_internals::getInstanceField<void*, 0x10>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_Buffer1(void* value)  {
::cordl_internals::setInstanceField<void*, 0x18>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_Buffer1() const {
return ::cordl_internals::getInstanceField<void*, 0x18>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_Buffer2(void* value)  {
::cordl_internals::setInstanceField<void*, 0x20>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_Buffer2() const {
return ::cordl_internals::getInstanceField<void*, 0x20>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_PrevCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_PrevCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__set_PrevSortKey(void* value)  {
::cordl_internals::setInstanceField<void*, 0x30>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::__get_PrevSortKey() const {
return ::cordl_internals::getInstanceField<void*, 0x30>(this->__instance);
}
 void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context::_ctor(System::Globalization::CompareOptions opt, void* alwaysMatchFlags, void* neverMatchFlags, void* buffer1, void* buffer2, void* prev1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, opt, alwaysMatchFlags, neverMatchFlags, buffer1, buffer2, prev1);
}
//  Writing Method size for method: Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::*)(bool)>(&Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22ada3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortKey", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo(int32_t Code, void* SortKey) noexcept : ::bs_hook::ValueTypeWrapper() {this->Code = Code;
this->SortKey = SortKey;
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::__set_Code(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::__get_Code() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::__set_SortKey(void* value)  {
::cordl_internals::setInstanceField<void*, 0x8>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::__get_SortKey() const {
return ::cordl_internals::getInstanceField<void*, 0x8>(this->__instance);
}
 void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo::_ctor(bool dummy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__PreviousInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dummy);
}
// Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Optional", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::Mono__Globalization__Unicode__SimpleCollator__Escape(::StringW Source, int32_t Index, int32_t Start, int32_t End, int32_t Optional) noexcept : ::bs_hook::ValueTypeWrapper() {this->Source = Source;
this->Index = Index;
this->Start = Start;
this->End = End;
this->Optional = Optional;
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__set_Source(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__get_Source() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__set_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__get_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__set_Start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__get_Start() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__set_End(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__get_End() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__set_Optional(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Escape::__get_Optional() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::Mono__Globalization__Unicode__SimpleCollator__ExtenderType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType  Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::None{0};
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType  Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::Simple{1};
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType  Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::Voiced{2};
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType  Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::Conditional{3};
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType  Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType::Buggy{4};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SimpleCollator::*)(System::Globalization::CultureInfo)>(&Mono::Globalization::Unicode::SimpleCollator::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x22aa7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.SetCJKTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SimpleCollator::*)(System::Globalization::CultureInfo, ByRef<Mono::Globalization::Unicode::CodePointIndexer>, ByRef<void*>, ByRef<void*>, ByRef<Mono::Globalization::Unicode::CodePointIndexer>, ByRef<void*>)>(&Mono::Globalization::Unicode::SimpleCollator::SetCJKTable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22aaaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "SetCJKTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::CodePointIndexer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::CodePointIndexer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetNeutralCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(System::Globalization::CultureInfo)>(&Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22aabcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetNeutralCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.Category
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::Category)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22aac3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Category",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.Level1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::Level1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22aacd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Level1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.Level2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType)>(&Mono::Globalization::Unicode::SimpleCollator::Level2)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x22aad64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Level2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsHalfKana
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IsHalfKana)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22aae90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsHalfKana",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetContraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Globalization::Unicode::Contraction (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::GetContraction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22aaf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetContraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Globalization::Unicode::Contraction (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::ArrayW<Mono::Globalization::Unicode::Contraction>)>(&Mono::Globalization::Unicode::SimpleCollator::GetContraction)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x22aafc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Mono::Globalization::Unicode::Contraction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetTailContraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Globalization::Unicode::Contraction (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::GetTailContraction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22ab0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetTailContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetTailContraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Globalization::Unicode::Contraction (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::ArrayW<Mono::Globalization::Unicode::Contraction>)>(&Mono::Globalization::Unicode::SimpleCollator::GetTailContraction)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x22ab1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetTailContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Mono::Globalization::Unicode::Contraction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.FilterOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::FilterOptions)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22ab398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FilterOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetExtenderType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::GetExtenderType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22ab484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetExtenderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.ToDashTypeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22ab588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "ToDashTypeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.FilterExtender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::FilterExtender)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x22ab5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FilterExtender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsIgnorable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IsIgnorable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22ab7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsIgnorable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsSafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::IsSafe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22ab840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::SortKey (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22ab8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::SortKey (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22ab8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, Mono::Globalization::Unicode::SortKeyBuffer, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x22abb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::SortKeyBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.FillSortKeyRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, Mono::Globalization::Unicode::SortKeyBuffer, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x22abee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FillSortKeyRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::SortKeyBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.FillSurrogateSortKeyRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, Mono::Globalization::Unicode::SortKeyBuffer)>(&Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22ac458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FillSurrogateSortKeyRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::SortKeyBuffer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.System_Globalization_ISimpleCollator_Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::System_Globalization_ISimpleCollator_Compare)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22ac5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "System.Globalization.ISimpleCollator.Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::Compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22ac5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.ClearBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SimpleCollator::*)(void*, int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::ClearBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22abea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "ClearBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.CompareInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ByRef<bool>, ByRef<bool>, bool, bool, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::CompareInternal)> {
  constexpr static std::size_t size = 0x13e4;
  constexpr static std::size_t addrs = 0x22ac658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "CompareInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.CompareFlagPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(bool, bool)>(&Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22ada4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "CompareFlagPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22ada6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ada8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, bool, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22adb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsSuffix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22adba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IsSuffix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22adbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.QuickIndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ByRef<bool>)>(&Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22adde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "QuickIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22adf4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IndexOfOrdinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22ae5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOfOrdinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IndexOfOrdinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, char16_t, int32_t, int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22ae6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOfOrdinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IndexOfSortKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, void*, char16_t, int32_t, bool, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22ae724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOfSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, void*, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x22ae140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.LastIndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, System::Globalization::CompareOptions)>(&Mono::Globalization::Unicode::SimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x22adc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.LastIndexOfOrdinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t)>(&Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x22aee98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOfOrdinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.LastIndexOfSortKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, int32_t, void*, int32_t, bool, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22aefcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOfSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.LastIndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, void*, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x22ae978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.MatchesForward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ByRef<int32_t>, int32_t, int32_t, void*, bool, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::MatchesForward)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x22ae7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.MatchesForwardCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ByRef<int32_t>, int32_t, int32_t, void*, bool, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, ByRef<Mono::Globalization::Unicode::Contraction>, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x22af234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesForwardCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Contraction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.MatchesPrimitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(System::Globalization::CompareOptions, void*, int32_t, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, void*, int32_t, bool)>(&Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22af588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.MatchesBackward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ByRef<int32_t>, int32_t, int32_t, int32_t, void*, bool, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::MatchesBackward)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22af070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesBackward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::SimpleCollator.MatchesBackwardCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ByRef<int32_t>, int32_t, int32_t, int32_t, void*, bool, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, ByRef<Mono::Globalization::Unicode::Contraction>, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>)>(&Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x22af7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesBackwardCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Contraction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Globalization::ISimpleCollator
constexpr  Mono::Globalization::Unicode::SimpleCollator::operator System::Globalization::ISimpleCollator() const noexcept {
return System::Globalization::ISimpleCollator(::bs_hook::Il2CppWrapperType::instance);
}
 void Mono::Globalization::Unicode::SimpleCollator::__set_invariant(Mono::Globalization::Unicode::SimpleCollator value)  {
::cordl_internals::setStaticField<Mono::Globalization::Unicode::SimpleCollator, "invariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get>(std::forward<Mono::Globalization::Unicode::SimpleCollator>(value));
}
 Mono::Globalization::Unicode::SimpleCollator Mono::Globalization::Unicode::SimpleCollator::__get_invariant()  {
return ::cordl_internals::getStaticField<Mono::Globalization::Unicode::SimpleCollator, "invariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get>();
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_textInfo(System::Globalization::TextInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::TextInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::TextInfo>(value));
}
constexpr System::Globalization::TextInfo Mono::Globalization::Unicode::SimpleCollator::__get_textInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::TextInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkIndexer(Mono::Globalization::Unicode::CodePointIndexer value)  {
::cordl_internals::setInstanceField<Mono::Globalization::Unicode::CodePointIndexer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Globalization::Unicode::CodePointIndexer>(value));
}
constexpr Mono::Globalization::Unicode::CodePointIndexer Mono::Globalization::Unicode::SimpleCollator::__get_cjkIndexer() const {
return ::cordl_internals::getInstanceField<Mono::Globalization::Unicode::CodePointIndexer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_contractions(::ArrayW<Mono::Globalization::Unicode::Contraction> value)  {
::cordl_internals::setInstanceField<::ArrayW<Mono::Globalization::Unicode::Contraction>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Mono::Globalization::Unicode::Contraction>>(value));
}
constexpr ::ArrayW<Mono::Globalization::Unicode::Contraction> Mono::Globalization::Unicode::SimpleCollator::__get_contractions() const {
return ::cordl_internals::getInstanceField<::ArrayW<Mono::Globalization::Unicode::Contraction>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_level2Maps(::ArrayW<Mono::Globalization::Unicode::Level2Map> value)  {
::cordl_internals::setInstanceField<::ArrayW<Mono::Globalization::Unicode::Level2Map>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Mono::Globalization::Unicode::Level2Map>>(value));
}
constexpr ::ArrayW<Mono::Globalization::Unicode::Level2Map> Mono::Globalization::Unicode::SimpleCollator::__get_level2Maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<Mono::Globalization::Unicode::Level2Map>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_unsafeFlags(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Globalization::Unicode::SimpleCollator::__get_unsafeFlags() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkCatTable(void* value)  {
::cordl_internals::setInstanceField<void*, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::SimpleCollator::__get_cjkCatTable() const {
return ::cordl_internals::getInstanceField<void*, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkLv1Table(void* value)  {
::cordl_internals::setInstanceField<void*, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv1Table() const {
return ::cordl_internals::getInstanceField<void*, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkLv2Table(void* value)  {
::cordl_internals::setInstanceField<void*, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv2Table() const {
return ::cordl_internals::getInstanceField<void*, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkLv2Indexer(Mono::Globalization::Unicode::CodePointIndexer value)  {
::cordl_internals::setInstanceField<Mono::Globalization::Unicode::CodePointIndexer, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Globalization::Unicode::CodePointIndexer>(value));
}
constexpr Mono::Globalization::Unicode::CodePointIndexer Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv2Indexer() const {
return ::cordl_internals::getInstanceField<Mono::Globalization::Unicode::CodePointIndexer, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_lcid(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::SimpleCollator::__get_lcid() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_frenchSort(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Globalization::Unicode::SimpleCollator::__get_frenchSort() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "culture", ty: "System::Globalization::CultureInfo", modifiers: "", def_value: None }]
 Mono::Globalization::Unicode::SimpleCollator::SimpleCollator(System::Globalization::CultureInfo culture)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimpleCollator>(culture))) {}
 void Mono::Globalization::Unicode::SimpleCollator::_ctor(System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture);
}
 void Mono::Globalization::Unicode::SimpleCollator::SetCJKTable(System::Globalization::CultureInfo culture, ByRef<Mono::Globalization::Unicode::CodePointIndexer> cjkIndexer, ByRef<void*> catTable, ByRef<void*> lv1Table, ByRef<Mono::Globalization::Unicode::CodePointIndexer> lv2Indexer, ByRef<void*> lv2Table)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "SetCJKTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::CodePointIndexer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::CodePointIndexer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
 System::Globalization::CultureInfo Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture(System::Globalization::CultureInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetNeutralCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, info);
}
 uint8_t Mono::Globalization::Unicode::SimpleCollator::Category(int32_t cp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Category",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method, cp);
}
 uint8_t Mono::Globalization::Unicode::SimpleCollator::Level1(int32_t cp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Level1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method, cp);
}
 uint8_t Mono::Globalization::Unicode::SimpleCollator::Level2(int32_t cp, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Level2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method, cp, ext);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsHalfKana(int32_t cp, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsHalfKana",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cp, opt);
}
 Mono::Globalization::Unicode::Contraction Mono::Globalization::Unicode::SimpleCollator::GetContraction(::StringW s, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Globalization::Unicode::Contraction, false>(const_cast<void*>(instance), ___internal_method, s, start, end);
}
 Mono::Globalization::Unicode::Contraction Mono::Globalization::Unicode::SimpleCollator::GetContraction(::StringW s, int32_t start, int32_t end, ::ArrayW<Mono::Globalization::Unicode::Contraction> clist)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Mono::Globalization::Unicode::Contraction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Globalization::Unicode::Contraction, false>(const_cast<void*>(instance), ___internal_method, s, start, end, clist);
}
 Mono::Globalization::Unicode::Contraction Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(::StringW s, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetTailContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Globalization::Unicode::Contraction, false>(const_cast<void*>(instance), ___internal_method, s, start, end);
}
 Mono::Globalization::Unicode::Contraction Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(::StringW s, int32_t start, int32_t end, ::ArrayW<Mono::Globalization::Unicode::Contraction> clist)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetTailContraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Mono::Globalization::Unicode::Contraction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Globalization::Unicode::Contraction, false>(const_cast<void*>(instance), ___internal_method, s, start, end, clist);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::FilterOptions(int32_t i, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FilterOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, i, opt);
}
 Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType Mono::Globalization::Unicode::SimpleCollator::GetExtenderType(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetExtenderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType, false>(const_cast<void*>(instance), ___internal_method, i);
}
 uint8_t Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue(Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "ToDashTypeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, ext, opt);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::FilterExtender(int32_t i, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FilterExtender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, i, ext, opt);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsIgnorable(int32_t i, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsIgnorable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, i, opt);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsSafe(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, i);
}
 System::Globalization::SortKey Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, System::Globalization::CompareOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::SortKey, false>(const_cast<void*>(instance), ___internal_method, s, options);
}
 System::Globalization::SortKey Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, int32_t start, int32_t length, System::Globalization::CompareOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::SortKey, false>(const_cast<void*>(instance), ___internal_method, s, start, length, options);
}
 void Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, int32_t start, int32_t end, Mono::Globalization::Unicode::SortKeyBuffer buf, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "GetSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::SortKeyBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s, start, end, buf, opt);
}
 void Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw(int32_t i, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, Mono::Globalization::Unicode::SortKeyBuffer buf, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FillSortKeyRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::SortKeyBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, i, ext, buf, opt);
}
 void Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw(int32_t i, Mono::Globalization::Unicode::SortKeyBuffer buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "FillSurrogateSortKeyRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::SortKeyBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, i, buf);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::System_Globalization_ISimpleCollator_Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, System::Globalization::CompareOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "System.Globalization.ISimpleCollator.Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, System::Globalization::CompareOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
 void Mono::Globalization::Unicode::SimpleCollator::ClearBuffer(void* buffer, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "ClearBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, size);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::CompareInternal(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ByRef<bool> targetConsumed, ByRef<bool> sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "CompareInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s1, idx1, len1, s2, idx2, len2, targetConsumed, sourceConsumed, skipHeadingExtenders, immediateBreakup, ctx);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair(bool b1, bool b2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "CompareFlagPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, b1, b2);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW src, ::StringW target, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, src, target, opt);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, opt);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, bool skipHeadingExtenders, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, skipHeadingExtenders, ctx);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsSuffix(::StringW src, ::StringW target, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, src, target, opt);
}
 bool Mono::Globalization::Unicode::SimpleCollator::IsSuffix(::StringW s, ::StringW target, int32_t start, int32_t length, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IsSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, opt);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ByRef<bool> testWasUnable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "QuickIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, testWasUnable);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, opt);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOfOrdinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(::StringW s, char16_t target, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOfOrdinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey(::StringW s, int32_t start, int32_t length, void* sortkey, char16_t target, int32_t ti, bool noLv4, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOfSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, start, length, sortkey, target, ti, noLv4, ctx);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, void* targetSortKey, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, targetSortKey, ctx);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, System::Globalization::CompareOptions opt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, opt);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOfOrdinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey(::StringW s, int32_t start, int32_t orgStart, int32_t length, void* sortkey, int32_t ti, bool noLv4, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOfSortKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, start, orgStart, length, sortkey, ti, noLv4, ctx);
}
 int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, void* targetSortKey, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "LastIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, target, start, length, targetSortKey, ctx);
}
 bool Mono::Globalization::Unicode::SimpleCollator::MatchesForward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, void* sortkey, bool noLv4, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, idx, end, ti, sortkey, noLv4, ctx);
}
 bool Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, void* sortkey, bool noLv4, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ByRef<Mono::Globalization::Unicode::Contraction> ct, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesForwardCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Contraction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, idx, end, ti, sortkey, noLv4, ext, ct, ctx);
}
 bool Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive(System::Globalization::CompareOptions opt, void* source, int32_t si, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, void* target, int32_t ti, bool noLv4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CompareOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, opt, source, si, ext, target, ti, noLv4);
}
 bool Mono::Globalization::Unicode::SimpleCollator::MatchesBackward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, void* sortkey, bool noLv4, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesBackward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, idx, end, orgStart, ti, sortkey, noLv4, ctx);
}
 bool Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, void* sortkey, bool noLv4, Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType ext, ByRef<Mono::Globalization::Unicode::Contraction> ct, ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context> ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::SimpleCollator>::get(),
                            "MatchesBackwardCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__ExtenderType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Contraction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Globalization::Unicode::Mono__Globalization__Unicode__SimpleCollator__Context>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, idx, end, orgStart, ti, sortkey, noLv4, ext, ct, ctx);
}
