#pragma once
#include "System/Xml/Linq/zzzz__XText_impl.hpp"
namespace {
#include "System/Xml/Linq/zzzz__XCData_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XCData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::XCData::*)(::StringW)>(&::System::Xml::Linq::XCData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26c9250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::XCData::*)(::System::Xml::Linq::XCData)>(&::System::Xml::Linq::XCData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26c92cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XCData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData.get_NodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XCData::*)()>(&::System::Xml::Linq::XCData::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c934c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Linq::XCData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData.WriteTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::XCData::*)(::System::Xml::XmlWriter)>(&::System::Xml::Linq::XCData::WriteTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26c9354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Linq::XCData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XCData.CloneNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode (::System::Xml::Linq::XCData::*)()>(&::System::Xml::Linq::XCData::CloneNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26c93c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Linq::XCData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Xml::Linq::XCData::XCData(::StringW value)  : ::System::Xml::Linq::XText(THROW_UNLESS(::il2cpp_utils::New<XCData>(value))) {}
 void ::System::Xml::Linq::XCData::_ctor(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "other", ty: "::System::Xml::Linq::XCData", modifiers: "", def_value: None }]
 ::System::Xml::Linq::XCData::XCData(::System::Xml::Linq::XCData other)  : ::System::Xml::Linq::XText(THROW_UNLESS(::il2cpp_utils::New<XCData>(other))) {}
 void ::System::Xml::Linq::XCData::_ctor(::System::Xml::Linq::XCData other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XCData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, other);
}
 ::System::Xml::XmlNodeType ::System::Xml::Linq::XCData::get_NodeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            "get_NodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Linq::XCData::WriteTo(::System::Xml::XmlWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            "WriteTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 ::System::Xml::Linq::XNode ::System::Xml::Linq::XCData::CloneNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XCData>::get(),
                            "CloneNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNode, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
