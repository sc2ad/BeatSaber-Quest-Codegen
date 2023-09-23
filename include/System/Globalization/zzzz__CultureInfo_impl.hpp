#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__CultureTypes_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
// Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mac", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__CultureInfo__Data::System__Globalization__CultureInfo__Data(int32_t ansi, int32_t ebcdic, int32_t mac, int32_t oem, bool right_to_left, uint8_t list_sep) noexcept : ::bs_hook::ValueTypeWrapper() {this->ansi = ansi;
this->ebcdic = ebcdic;
this->mac = mac;
this->oem = oem;
this->right_to_left = right_to_left;
this->list_sep = list_sep;
}
constexpr void System::Globalization::System__Globalization__CultureInfo__Data::__set_ansi(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureInfo__Data::__get_ansi() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureInfo__Data::__set_ebcdic(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureInfo__Data::__get_ebcdic() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureInfo__Data::__set_mac(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureInfo__Data::__get_mac() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureInfo__Data::__set_oem(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureInfo__Data::__get_oem() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureInfo__Data::__set_right_to_left(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::System__Globalization__CultureInfo__Data::__get_right_to_left() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureInfo__Data::__set_list_sep(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x11>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Globalization::System__Globalization__CultureInfo__Data::__get_list_sep() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x11>(this->__instance);
}
//  Writing Method size for method: System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2409ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::*)(::StringW)>(&System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2409fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>(object, method))) {}
 void System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate::Invoke(::StringW language)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, language);
}
//  Writing Method size for method: System::Globalization::CultureInfo.get__cultureData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureData (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get__cultureData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24042d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get__cultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get__isInherited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get__isInherited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24042e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get__isInherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_InvariantCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_InvariantCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23f5334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_InvariantCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_CurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_CurrentCulture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23f55b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_CurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_CurrentUICulture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24042e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.ConstructCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::ConstructCurrentCulture)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2404308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.ConstructCurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::ConstructCurrentUICulture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x240470c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_Territory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_Territory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2404758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_Territory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get__name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get__name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2404760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get__name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_LCID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_LCID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2404768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2404770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_Calendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_Calendar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2404778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_Parent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_Parent)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2404a54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_TextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::TextInfo (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_TextInfo)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2404c9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::Clone)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2404e30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureInfo::*)(::bs_hook::Il2CppWrapperType)>(&System::Globalization::CultureInfo::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2404fc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetCultures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Globalization::CultureInfo> (*)(System::Globalization::CultureTypes)>(&System::Globalization::CultureInfo::GetCultures)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2405074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureTypes>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetTextInfoData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::System__Globalization__CultureInfo__Data (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::GetTextInfoData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24052b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetTextInfoData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2405344;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2405350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_CompareInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CompareInfo (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_CompareInfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2405358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_IsNeutralCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_IsNeutralCulture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24054b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CheckNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::CheckNeutral)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24054f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CheckNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_NumberFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::NumberFormatInfo (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_NumberFormat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24054fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.set_NumberFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(System::Globalization::NumberFormatInfo)>(&System::Globalization::CultureInfo::set_NumberFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2405588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_DateTimeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_DateTimeFormat)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2405658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.set_DateTimeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(System::Globalization::DateTimeFormatInfo)>(&System::Globalization::CultureInfo::set_DateTimeFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24057b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_EnglishName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_EnglishName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2405888;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Globalization::CultureInfo::*)(System::Type)>(&System::Globalization::CultureInfo::GetFormat)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24058b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Globalization::CultureInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::Construct)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24047fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.construct_internal_locale_from_lcid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureInfo::*)(int32_t)>(&System::Globalization::CultureInfo::construct_internal_locale_from_lcid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24059c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "construct_internal_locale_from_lcid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.construct_internal_locale_from_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureInfo::*)(::StringW)>(&System::Globalization::CultureInfo::construct_internal_locale_from_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24059cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "construct_internal_locale_from_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_current_locale_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Globalization::CultureInfo::get_current_locale_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24044ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_current_locale_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.internal_get_cultures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Globalization::CultureInfo> (*)(bool, bool, bool)>(&System::Globalization::CultureInfo::internal_get_cultures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24052a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "internal_get_cultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.ConstructInvariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(bool)>(&System::Globalization::CultureInfo::ConstructInvariant)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x24059d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CreateTextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::TextInfo (System::Globalization::CultureInfo::*)(bool)>(&System::Globalization::CultureInfo::CreateTextInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2404db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateTextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(int32_t)>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2404c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(int32_t, bool)>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2405b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(int32_t, bool, bool)>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2405b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(::StringW)>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f6b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(::StringW, bool)>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23fd114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)(::StringW, bool, bool)>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2405d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2406108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.insert_into_shared_tables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::CultureInfo)>(&System::Globalization::CultureInfo::insert_into_shared_tables)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2406128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "insert_into_shared_tables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetCultureInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(int32_t)>(&System::Globalization::CultureInfo::GetCultureInfo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x23f926c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetCultureInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(::StringW)>(&System::Globalization::CultureInfo::GetCultureInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x23f94b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CreateCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(::StringW, bool)>(&System::Globalization::CultureInfo::CreateCulture)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24062b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CreateSpecificCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(::StringW)>(&System::Globalization::CultureInfo::CreateSpecificCulture)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x24044f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateSpecificCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.ConstructLocaleFromName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureInfo::*)(::StringW)>(&System::Globalization::CultureInfo::ConstructLocaleFromName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2405fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructLocaleFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CreateSpecificCultureFromNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(::StringW)>(&System::Globalization::CultureInfo::CreateSpecificCultureFromNeutral)> {
  constexpr static std::size_t size = 0x2754;
  constexpr static std::size_t addrs = 0x2406324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateSpecificCultureFromNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_CalendarType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_CalendarType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24052cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CalendarType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CreateCalendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar (*)(int32_t)>(&System::Globalization::CultureInfo::CreateCalendar)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x240481c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.CreateNotFoundException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(::StringW)>(&System::Globalization::CultureInfo::CreateNotFoundException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2406040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_DefaultThreadCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_DefaultThreadCurrentCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2408a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.set_DefaultThreadCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::CultureInfo)>(&System::Globalization::CultureInfo::set_DefaultThreadCurrentCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2408ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "set_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_DefaultThreadCurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_DefaultThreadCurrentUICulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2408b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_DefaultThreadCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_SortName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureInfo::*)()>(&System::Globalization::CultureInfo::get_SortName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2408b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_SortName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_UserDefaultUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_UserDefaultUICulture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2408ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_UserDefaultUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.get_UserDefaultCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::get_UserDefaultCulture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2408bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_UserDefaultCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.InitializeUserPreferredCultureInfoInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate)>(&System::Globalization::CultureInfo::InitializeUserPreferredCultureInfoInAppX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2408c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "InitializeUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.SetUserPreferredCultureInfoInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Globalization::CultureInfo::SetUserPreferredCultureInfoInAppX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2408c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "SetUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.OnCultureInfoChangedInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Globalization::CultureInfo::OnCultureInfoChangedInAppX)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2404238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "OnCultureInfoChangedInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.GetCultureInfoForUserPreferredLanguageInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)()>(&System::Globalization::CultureInfo::GetCultureInfoForUserPreferredLanguageInAppX)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2408c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureInfo.SetCultureInfoForUserPreferredLanguageInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::CultureInfo)>(&System::Globalization::CultureInfo::SetCultureInfoForUserPreferredLanguageInAppX)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2408d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "SetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ICloneable
constexpr  System::Globalization::CultureInfo::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IFormatProvider
constexpr  System::Globalization::CultureInfo::operator System::IFormatProvider() const noexcept {
return System::IFormatProvider(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::CultureInfo::__set_invariant_culture_info(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "invariant_culture_info", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::__get_invariant_culture_info()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "invariant_culture_info", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_shared_table_lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "shared_table_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Globalization::CultureInfo::__get_shared_table_lock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "shared_table_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_default_current_culture(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "default_current_culture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::__get_default_current_culture()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "default_current_culture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
constexpr void System::Globalization::CultureInfo::__set_m_isReadOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::CultureInfo::__get_m_isReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_cultureID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureInfo::__get_cultureID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_parent_lcid(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureInfo::__get_parent_lcid() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_datetime_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureInfo::__get_datetime_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_number_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureInfo::__get_number_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_default_calendar_type(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureInfo::__get_default_calendar_type() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_m_useUserOverride(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::CultureInfo::__get_m_useUserOverride() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_numInfo(System::Globalization::NumberFormatInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::NumberFormatInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::NumberFormatInfo>(value));
}
constexpr System::Globalization::NumberFormatInfo System::Globalization::CultureInfo::__get_numInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::NumberFormatInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_dateTimeInfo(System::Globalization::DateTimeFormatInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::DateTimeFormatInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::DateTimeFormatInfo>(value));
}
constexpr System::Globalization::DateTimeFormatInfo System::Globalization::CultureInfo::__get_dateTimeInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::DateTimeFormatInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_textInfo(System::Globalization::TextInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::TextInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::TextInfo>(value));
}
constexpr System::Globalization::TextInfo System::Globalization::CultureInfo::__get_textInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::TextInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_m_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_m_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_englishname(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_englishname() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_nativename(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_nativename() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_iso3lang(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_iso3lang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_iso2lang(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_iso2lang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_win3lang(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_win3lang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_territory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureInfo::__get_territory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_native_calendar_names(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::CultureInfo::__get_native_calendar_names() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_compareInfo(System::Globalization::CompareInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::CompareInfo, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CompareInfo>(value));
}
constexpr System::Globalization::CompareInfo System::Globalization::CultureInfo::__get_compareInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::CompareInfo, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_textinfo_data(void* value)  {
::cordl_internals::setInstanceField<void*, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Globalization::CultureInfo::__get_textinfo_data() const {
return ::cordl_internals::getInstanceField<void*, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_m_dataItem(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureInfo::__get_m_dataItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_calendar(System::Globalization::Calendar value)  {
::cordl_internals::setInstanceField<System::Globalization::Calendar, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::Calendar>(value));
}
constexpr System::Globalization::Calendar System::Globalization::CultureInfo::__get_calendar() const {
return ::cordl_internals::getInstanceField<System::Globalization::Calendar, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_parent_culture(System::Globalization::CultureInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::CultureInfo, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CultureInfo>(value));
}
constexpr System::Globalization::CultureInfo System::Globalization::CultureInfo::__get_parent_culture() const {
return ::cordl_internals::getInstanceField<System::Globalization::CultureInfo, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_constructed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::CultureInfo::__get_constructed() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_cached_serialized_form(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Globalization::CultureInfo::__get_cached_serialized_form() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_m_cultureData(System::Globalization::CultureData value)  {
::cordl_internals::setInstanceField<System::Globalization::CultureData, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CultureData>(value));
}
constexpr System::Globalization::CultureData System::Globalization::CultureInfo::__get_m_cultureData() const {
return ::cordl_internals::getInstanceField<System::Globalization::CultureData, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureInfo::__set_m_isInherited(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::CultureInfo::__get_m_isInherited() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::CultureInfo::__set_s_DefaultThreadCurrentUICulture(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "s_DefaultThreadCurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::__get_s_DefaultThreadCurrentUICulture()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "s_DefaultThreadCurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_s_DefaultThreadCurrentCulture(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "s_DefaultThreadCurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::__get_s_DefaultThreadCurrentCulture()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "s_DefaultThreadCurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_shared_by_number(System::Collections::Generic::Dictionary_2<int32_t,System::Globalization::CultureInfo> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<int32_t,System::Globalization::CultureInfo>, "shared_by_number", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Collections::Generic::Dictionary_2<int32_t,System::Globalization::CultureInfo>>(value));
}
 System::Collections::Generic::Dictionary_2<int32_t,System::Globalization::CultureInfo> System::Globalization::CultureInfo::__get_shared_by_number()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<int32_t,System::Globalization::CultureInfo>, "shared_by_number", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_shared_by_name(System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::CultureInfo> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::CultureInfo>, "shared_by_name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::CultureInfo>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::CultureInfo> System::Globalization::CultureInfo::__get_shared_by_name()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,System::Globalization::CultureInfo>, "shared_by_name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_s_UserPreferredCultureInfoInAppX(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "s_UserPreferredCultureInfoInAppX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::__get_s_UserPreferredCultureInfoInAppX()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "s_UserPreferredCultureInfoInAppX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 void System::Globalization::CultureInfo::__set_IsTaiwanSku(bool value)  {
::cordl_internals::setStaticField<bool, "IsTaiwanSku", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>(std::forward<bool>(value));
}
 bool System::Globalization::CultureInfo::__get_IsTaiwanSku()  {
return ::cordl_internals::getStaticField<bool, "IsTaiwanSku", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get>();
}
 System::Globalization::CultureData System::Globalization::CultureInfo::get__cultureData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get__cultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureData, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::CultureInfo::get__isInherited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get__isInherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_InvariantCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_InvariantCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_CurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_CurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::ConstructCurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::ConstructCurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 ::StringW System::Globalization::CultureInfo::get_Territory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_Territory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureInfo::get__name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get__name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Globalization::CultureInfo::get_LCID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_LCID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::Calendar System::Globalization::CultureInfo::get_Calendar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_Calendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::Calendar, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_Parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::TextInfo System::Globalization::CultureInfo::get_TextInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_TextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::TextInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Globalization::CultureInfo::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::CultureInfo::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<System::Globalization::CultureInfo> System::Globalization::CultureInfo::GetCultures(System::Globalization::CultureTypes types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureTypes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Globalization::CultureInfo>, false>(nullptr, ___internal_method, types);
}
 System::Globalization::System__Globalization__CultureInfo__Data System::Globalization::CultureInfo::GetTextInfoData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetTextInfoData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::System__Globalization__CultureInfo__Data, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Globalization::CultureInfo::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CompareInfo System::Globalization::CultureInfo::get_CompareInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CompareInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CompareInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::CultureInfo::get_IsNeutralCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_IsNeutralCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::CultureInfo::CheckNeutral()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CheckNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::NumberFormatInfo System::Globalization::CultureInfo::get_NumberFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_NumberFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::NumberFormatInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::CultureInfo::set_NumberFormat(System::Globalization::NumberFormatInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "set_NumberFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::CultureInfo::get_DateTimeFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_DateTimeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::CultureInfo::set_DateTimeFormat(System::Globalization::DateTimeFormatInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "set_DateTimeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::Globalization::CultureInfo::get_EnglishName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_EnglishName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Globalization::CultureInfo::GetFormat(System::Type formatType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, formatType);
}
 void System::Globalization::CultureInfo::Construct()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::CultureInfo::construct_internal_locale_from_lcid(int32_t lcid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "construct_internal_locale_from_lcid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, lcid);
}
 bool System::Globalization::CultureInfo::construct_internal_locale_from_name(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "construct_internal_locale_from_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::StringW System::Globalization::CultureInfo::get_current_locale_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_current_locale_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::ArrayW<System::Globalization::CultureInfo> System::Globalization::CultureInfo::internal_get_cultures(bool neutral, bool specific, bool installed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "internal_get_cultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Globalization::CultureInfo>, false>(nullptr, ___internal_method, neutral, specific, installed);
}
 void System::Globalization::CultureInfo::ConstructInvariant(bool read_only)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, read_only);
}
 System::Globalization::TextInfo System::Globalization::CultureInfo::CreateTextInfo(bool readOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateTextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::TextInfo, false>(const_cast<void*>(instance), ___internal_method, readOnly);
}
// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }]
 System::Globalization::CultureInfo::CultureInfo(int32_t culture)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>(culture))) {}
 void System::Globalization::CultureInfo::_ctor(int32_t culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture);
}
// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }]
 System::Globalization::CultureInfo::CultureInfo(int32_t culture, bool useUserOverride)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>(culture, useUserOverride))) {}
 void System::Globalization::CultureInfo::_ctor(int32_t culture, bool useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture, useUserOverride);
}
// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "read_only", ty: "bool", modifiers: "", def_value: None }]
 System::Globalization::CultureInfo::CultureInfo(int32_t culture, bool useUserOverride, bool read_only)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>(culture, useUserOverride, read_only))) {}
 void System::Globalization::CultureInfo::_ctor(int32_t culture, bool useUserOverride, bool read_only)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture, useUserOverride, read_only);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 System::Globalization::CultureInfo::CultureInfo(::StringW name)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>(name))) {}
 void System::Globalization::CultureInfo::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }]
 System::Globalization::CultureInfo::CultureInfo(::StringW name, bool useUserOverride)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>(name, useUserOverride))) {}
 void System::Globalization::CultureInfo::_ctor(::StringW name, bool useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, useUserOverride);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "read_only", ty: "bool", modifiers: "", def_value: None }]
 System::Globalization::CultureInfo::CultureInfo(::StringW name, bool useUserOverride, bool read_only)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>(name, useUserOverride, read_only))) {}
 void System::Globalization::CultureInfo::_ctor(::StringW name, bool useUserOverride, bool read_only)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, useUserOverride, read_only);
}
// Ctor Parameters []
 System::Globalization::CultureInfo::CultureInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureInfo>())) {}
 void System::Globalization::CultureInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::CultureInfo::insert_into_shared_tables(System::Globalization::CultureInfo c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "insert_into_shared_tables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::GetCultureInfo(int32_t culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, culture);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::GetCultureInfo(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, name);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::CreateCulture(::StringW name, bool reference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, name, reference);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::CreateSpecificCulture(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateSpecificCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, name);
}
 bool System::Globalization::CultureInfo::ConstructLocaleFromName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "ConstructLocaleFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::CreateSpecificCultureFromNeutral(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateSpecificCultureFromNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, name);
}
 int32_t System::Globalization::CultureInfo::get_CalendarType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_CalendarType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::Calendar System::Globalization::CultureInfo::CreateCalendar(int32_t calendarType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::Calendar, false>(nullptr, ___internal_method, calendarType);
}
 System::Exception System::Globalization::CultureInfo::CreateNotFoundException(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "CreateNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, name);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_DefaultThreadCurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 void System::Globalization::CultureInfo::set_DefaultThreadCurrentCulture(System::Globalization::CultureInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "set_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_DefaultThreadCurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_DefaultThreadCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 ::StringW System::Globalization::CultureInfo::get_SortName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_SortName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_UserDefaultUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_UserDefaultUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::get_UserDefaultCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "get_UserDefaultCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 void System::Globalization::CultureInfo::InitializeUserPreferredCultureInfoInAppX(System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate onCultureInfoChangedInAppX)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "InitializeUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::System__Globalization__CultureInfo__OnCultureInfoChangedDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, onCultureInfoChangedInAppX);
}
 void System::Globalization::CultureInfo::SetUserPreferredCultureInfoInAppX(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "SetUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
 void System::Globalization::CultureInfo::OnCultureInfoChangedInAppX(::StringW language)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "OnCultureInfoChangedInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, language);
}
 System::Globalization::CultureInfo System::Globalization::CultureInfo::GetCultureInfoForUserPreferredLanguageInAppX()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "GetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method);
}
 void System::Globalization::CultureInfo::SetCultureInfoForUserPreferredLanguageInAppX(System::Globalization::CultureInfo cultureInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureInfo>::get(),
                            "SetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cultureInfo);
}
