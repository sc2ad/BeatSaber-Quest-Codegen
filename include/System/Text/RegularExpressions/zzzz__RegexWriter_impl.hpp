#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexWriter_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCode_def.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(System::Span_1<int32_t>, System::Span_1<int32_t>)>(&System::Text::RegularExpressions::RegexWriter::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27d7230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexCode (*)(System::Text::RegularExpressions::RegexTree)>(&System::Text::RegularExpressions::RegexWriter::Write)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27d7378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexTree>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)()>(&System::Text::RegularExpressions::RegexWriter::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27d78dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.RegexCodeFromRegexTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexCode (System::Text::RegularExpressions::RegexWriter::*)(System::Text::RegularExpressions::RegexTree)>(&System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x27d747c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "RegexCodeFromRegexTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexTree>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.PatchJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int32_t, int32_t)>(&System::Text::RegularExpressions::RegexWriter::PatchJump)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27d848c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "PatchJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.Emit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int32_t)>(&System::Text::RegularExpressions::RegexWriter::Emit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x27d84f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Emit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.Emit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int32_t, int32_t)>(&System::Text::RegularExpressions::RegexWriter::Emit)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x27d7930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Emit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.Emit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int32_t, int32_t, int32_t)>(&System::Text::RegularExpressions::RegexWriter::Emit)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x27d85d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Emit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.StringCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::RegularExpressions::RegexWriter::*)(::StringW)>(&System::Text::RegularExpressions::RegexWriter::StringCode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x27d8780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "StringCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.MapCapnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::RegularExpressions::RegexWriter::*)(int32_t)>(&System::Text::RegularExpressions::RegexWriter::MapCapnum)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27d88cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "MapCapnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::RegularExpressions::RegexWriter.EmitFragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexWriter::*)(int32_t, System::Text::RegularExpressions::RegexNode, int32_t)>(&System::Text::RegularExpressions::RegexWriter::EmitFragment)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x27d7a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "EmitFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_emitted", ty: "System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_intStack", ty: "System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stringHash", ty: "System::Collections::Generic::Dictionary_2<::StringW,int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_stringTable", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_trackCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Text::RegularExpressions::RegexWriter::RegexWriter(System::Collections::Generic::ValueListBuilder_1<int32_t> _emitted, System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack, System::Collections::Generic::Dictionary_2<::StringW,int32_t> _stringHash, System::Collections::Generic::List_1<::StringW> _stringTable, System::Collections::Hashtable _caps, int32_t _trackCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->_emitted = _emitted;
this->_intStack = _intStack;
this->_stringHash = _stringHash;
this->_stringTable = _stringTable;
this->_caps = _caps;
this->_trackCount = _trackCount;
}
constexpr void System::Text::RegularExpressions::RegexWriter::__set__emitted(System::Collections::Generic::ValueListBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::ValueListBuilder_1<int32_t>, 0x0>(this->__instance, std::forward<System::Collections::Generic::ValueListBuilder_1<int32_t>>(value));
}
constexpr System::Collections::Generic::ValueListBuilder_1<int32_t> System::Text::RegularExpressions::RegexWriter::__get__emitted() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::ValueListBuilder_1<int32_t>, 0x0>(this->__instance);
}
constexpr void System::Text::RegularExpressions::RegexWriter::__set__intStack(System::Collections::Generic::ValueListBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::ValueListBuilder_1<int32_t>, 0x20>(this->__instance, std::forward<System::Collections::Generic::ValueListBuilder_1<int32_t>>(value));
}
constexpr System::Collections::Generic::ValueListBuilder_1<int32_t> System::Text::RegularExpressions::RegexWriter::__get__intStack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::ValueListBuilder_1<int32_t>, 0x20>(this->__instance);
}
constexpr void System::Text::RegularExpressions::RegexWriter::__set__stringHash(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x40>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> System::Text::RegularExpressions::RegexWriter::__get__stringHash() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x40>(this->__instance);
}
constexpr void System::Text::RegularExpressions::RegexWriter::__set__stringTable(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x48>(this->__instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> System::Text::RegularExpressions::RegexWriter::__get__stringTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x48>(this->__instance);
}
constexpr void System::Text::RegularExpressions::RegexWriter::__set__caps(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x50>(this->__instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Text::RegularExpressions::RegexWriter::__get__caps() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x50>(this->__instance);
}
constexpr void System::Text::RegularExpressions::RegexWriter::__set__trackCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::RegularExpressions::RegexWriter::__get__trackCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->__instance);
}
 void System::Text::RegularExpressions::RegexWriter::_ctor(System::Span_1<int32_t> emittedSpan, System::Span_1<int32_t> intStackSpan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, emittedSpan, intStackSpan);
}
 System::Text::RegularExpressions::RegexCode System::Text::RegularExpressions::RegexWriter::Write(System::Text::RegularExpressions::RegexTree tree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexTree>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::RegexCode, false>(nullptr, ___internal_method, tree);
}
 void System::Text::RegularExpressions::RegexWriter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Text::RegularExpressions::RegexCode System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree(System::Text::RegularExpressions::RegexTree tree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "RegexCodeFromRegexTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexTree>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::RegexCode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, tree);
}
 void System::Text::RegularExpressions::RegexWriter::PatchJump(int32_t offset, int32_t jumpDest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "PatchJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, offset, jumpDest);
}
 void System::Text::RegularExpressions::RegexWriter::Emit(int32_t op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Emit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, op);
}
 void System::Text::RegularExpressions::RegexWriter::Emit(int32_t op, int32_t opd1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Emit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, op, opd1);
}
 void System::Text::RegularExpressions::RegexWriter::Emit(int32_t op, int32_t opd1, int32_t opd2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "Emit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, op, opd1, opd2);
}
 int32_t System::Text::RegularExpressions::RegexWriter::StringCode(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "StringCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, str);
}
 int32_t System::Text::RegularExpressions::RegexWriter::MapCapnum(int32_t capnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "MapCapnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, capnum);
}
 void System::Text::RegularExpressions::RegexWriter::EmitFragment(int32_t nodetype, System::Text::RegularExpressions::RegexNode node, int32_t curIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexWriter>::get(),
                            "EmitFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::RegularExpressions::RegexNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, nodetype, node, curIndex);
}
