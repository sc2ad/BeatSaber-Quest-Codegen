#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
//  Writing Method size for method: MS::Internal::Xml::Cache::XPathNodeRef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::Cache::XPathNodeRef::*)(::ArrayW<MS::Internal::Xml::Cache::XPathNode>, int32_t)>(&MS::Internal::Xml::Cache::XPathNodeRef::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2757e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<MS::Internal::Xml::Cache::XPathNode>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: MS::Internal::Xml::Cache::XPathNodeRef.get_Page
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<MS::Internal::Xml::Cache::XPathNode> (MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&MS::Internal::Xml::Cache::XPathNodeRef::get_Page)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2757e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            "get_Page",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: MS::Internal::Xml::Cache::XPathNodeRef.get_Index
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&MS::Internal::Xml::Cache::XPathNodeRef::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2757e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            "get_Index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: MS::Internal::Xml::Cache::XPathNodeRef.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&MS::Internal::Xml::Cache::XPathNodeRef::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2757e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(MS::Internal::Xml::Cache::XPathNodeRef),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_page", ty: "::ArrayW<MS::Internal::Xml::Cache::XPathNode>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_idx", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr MS::Internal::Xml::Cache::XPathNodeRef::XPathNodeRef(::ArrayW<MS::Internal::Xml::Cache::XPathNode> _page, int32_t _idx) noexcept : ::bs_hook::ValueTypeWrapper() {this->_page = _page;
this->_idx = _idx;
}
constexpr void MS::Internal::Xml::Cache::XPathNodeRef::__set__page(::ArrayW<MS::Internal::Xml::Cache::XPathNode> value)  {
::cordl_internals::setInstanceField<::ArrayW<MS::Internal::Xml::Cache::XPathNode>, 0x0>(this->__instance, std::forward<::ArrayW<MS::Internal::Xml::Cache::XPathNode>>(value));
}
constexpr ::ArrayW<MS::Internal::Xml::Cache::XPathNode> MS::Internal::Xml::Cache::XPathNodeRef::__get__page() const {
return ::cordl_internals::getInstanceField<::ArrayW<MS::Internal::Xml::Cache::XPathNode>, 0x0>(this->__instance);
}
constexpr void MS::Internal::Xml::Cache::XPathNodeRef::__set__idx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t MS::Internal::Xml::Cache::XPathNodeRef::__get__idx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void MS::Internal::Xml::Cache::XPathNodeRef::_ctor(::ArrayW<MS::Internal::Xml::Cache::XPathNode> page, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<MS::Internal::Xml::Cache::XPathNode>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, page, idx);
}
 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> MS::Internal::Xml::Cache::XPathNodeRef::get_Page()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            "get_Page",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<MS::Internal::Xml::Cache::XPathNode>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t MS::Internal::Xml::Cache::XPathNodeRef::get_Index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            "get_Index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t MS::Internal::Xml::Cache::XPathNodeRef::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MS::Internal::Xml::Cache::XPathNodeRef>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
