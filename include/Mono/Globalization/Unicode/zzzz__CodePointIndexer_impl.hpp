#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
//  Writing Method size for method: Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::*)(int32_t, int32_t, int32_t)>(&Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a7e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::Mono__Globalization__Unicode__CodePointIndexer__TableRange(int32_t Start, int32_t End, int32_t Count, int32_t IndexStart, int32_t IndexEnd) noexcept : ::bs_hook::ValueTypeWrapper() {this->Start = Start;
this->End = End;
this->Count = Count;
this->IndexStart = IndexStart;
this->IndexEnd = IndexEnd;
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__set_Start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__get_Start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__set_End(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__get_End() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__set_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__get_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__set_IndexStart(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__get_IndexStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__set_IndexEnd(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::__get_IndexEnd() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 void Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange::_ctor(int32_t start, int32_t end, int32_t indexStart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start, end, indexStart);
}
//  Writing Method size for method: Mono::Globalization::Unicode::CodePointIndexer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::CodePointIndexer::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, int32_t, int32_t)>(&Mono::Globalization::Unicode::CodePointIndexer::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22a7d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::CodePointIndexer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::CodePointIndexer.ToIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::CodePointIndexer::*)(int32_t)>(&Mono::Globalization::Unicode::CodePointIndexer::ToIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a7e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::CodePointIndexer>::get(),
                            "ToIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_ranges(::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange> value)  {
::cordl_internals::setInstanceField<::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange>>(value));
}
constexpr ::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange> Mono::Globalization::Unicode::CodePointIndexer::__get_ranges() const {
return ::cordl_internals::getInstanceField<::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_TotalCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::CodePointIndexer::__get_TotalCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_defaultIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::CodePointIndexer::__get_defaultIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_defaultCP(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::CodePointIndexer::__get_defaultCP() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Globalization::Unicode::CodePointIndexer Mono::Globalization::Unicode::CodePointIndexer::New_ctor(::ArrayW<int32_t> starts, ::ArrayW<int32_t> ends, int32_t defaultIndex, int32_t defaultCP)  {
Mono::Globalization::Unicode::CodePointIndexer o{THROW_UNLESS(::il2cpp_utils::New<Mono::Globalization::Unicode::CodePointIndexer>(starts, ends, defaultIndex, defaultCP))};
return o;
}
 void Mono::Globalization::Unicode::CodePointIndexer::_ctor(::ArrayW<int32_t> starts, ::ArrayW<int32_t> ends, int32_t defaultIndex, int32_t defaultCP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::CodePointIndexer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, starts, ends, defaultIndex, defaultCP);
}
 int32_t Mono::Globalization::Unicode::CodePointIndexer::ToIndex(int32_t cp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::CodePointIndexer>::get(),
                            "ToIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, cp);
}
