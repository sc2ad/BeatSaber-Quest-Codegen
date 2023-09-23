#pragma once
#include "System/Collections/Specialized/zzzz__NameValueCollection_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__HeaderInfoTable_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Net/zzzz__HttpRequestHeader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar::System__Net__WebHeaderCollection__RfcChar(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__WebHeaderCollection__RfcChar::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::System__Net__WebHeaderCollection__RfcChar::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::High{0u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::Reg{1u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::Ctl{2u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::CR{3u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::LF{4u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::WS{5u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::Colon{6u};
constexpr System::Net::System__Net__WebHeaderCollection__RfcChar  System::Net::System__Net__WebHeaderCollection__RfcChar::Delim{7u};
//  Writing Method size for method: System::Net::WebHeaderCollection.NormalizeCommonHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::NormalizeCommonHeaders)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x280e670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "NormalizeCommonHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.get_InnerCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Specialized::NameValueCollection (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::get_InnerCollection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x280e770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "get_InnerCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.AllowMultiValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::WebHeaderCollection::AllowMultiValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x280e814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "AllowMultiValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.get_AllowHttpRequestHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::get_AllowHttpRequestHeader)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x280e998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "get_AllowHttpRequestHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Net::HttpRequestHeader)>(&System::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x280e9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpRequestHeader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.AddInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&System::Net::WebHeaderCollection::AddInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x280eac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "AddInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.ChangeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&System::Net::WebHeaderCollection::ChangeInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x280eb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ChangeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.RemoveInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW)>(&System::Net::WebHeaderCollection::RemoveInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x280eb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "RemoveInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.CheckBadChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&System::Net::WebHeaderCollection::CheckBadChars)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x280ebcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "CheckBadChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.ContainsNonAsciiChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::WebHeaderCollection::ContainsNonAsciiChars)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x280ef60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ContainsNonAsciiChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.ThrowOnRestrictedHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW)>(&System::Net::WebHeaderCollection::ThrowOnRestrictedHeader)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x280efe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ThrowOnRestrictedHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&System::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x280f14c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW)>(&System::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x280f300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&System::Net::WebHeaderCollection::Set)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x280f5dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.SetInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&System::Net::WebHeaderCollection::SetInternal)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x280f80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "SetInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::StringW)>(&System::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x280fa30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.GetValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Net::WebHeaderCollection::*)(::StringW)>(&System::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x280fb6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x280fd74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.GetAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Collections::Specialized::NameValueCollection, bool, bool)>(&System::Net::WebHeaderCollection::GetAsString)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x280fdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Specialized::NameValueCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2810074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Net::WebHeaderCollectionType)>(&System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28100d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebHeaderCollectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x28101bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::WebHeaderCollection::OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2810380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebHeaderCollection::GetObjectData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2810384;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebHeaderCollection::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2810504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebHeaderCollection::*)(::StringW)>(&System::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2810510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2810838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::WebHeaderCollection::*)()>(&System::Net::WebHeaderCollection::get_Count)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28108b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebHeaderCollection::*)(int32_t)>(&System::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28108e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.GetValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Net::WebHeaderCollection::*)(int32_t)>(&System::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2810924;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebHeaderCollection.GetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebHeaderCollection::*)(int32_t)>(&System::Net::WebHeaderCollection::GetKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2810964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebHeaderCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Net::WebHeaderCollection::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::WebHeaderCollection::__set_HInfo(System::Net::HeaderInfoTable value)  {
::cordl_internals::setStaticField<System::Net::HeaderInfoTable, "HInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>(std::forward<System::Net::HeaderInfoTable>(value));
}
 System::Net::HeaderInfoTable System::Net::WebHeaderCollection::__get_HInfo()  {
return ::cordl_internals::getStaticField<System::Net::HeaderInfoTable, "HInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>();
}
constexpr void System::Net::WebHeaderCollection::__set_m_CommonHeaders(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Net::WebHeaderCollection::__get_m_CommonHeaders() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebHeaderCollection::__set_m_NumCommonHeaders(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::WebHeaderCollection::__get_m_NumCommonHeaders() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::WebHeaderCollection::__set_s_CommonHeaderNames(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_CommonHeaderNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Net::WebHeaderCollection::__get_s_CommonHeaderNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_CommonHeaderNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>();
}
 void System::Net::WebHeaderCollection::__set_s_CommonHeaderHints(::ArrayW<int8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_CommonHeaderHints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>(std::forward<::ArrayW<int8_t>>(value));
}
 ::ArrayW<int8_t> System::Net::WebHeaderCollection::__get_s_CommonHeaderHints()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_CommonHeaderHints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>();
}
constexpr void System::Net::WebHeaderCollection::__set_m_InnerCollection(System::Collections::Specialized::NameValueCollection value)  {
::cordl_internals::setInstanceField<System::Collections::Specialized::NameValueCollection, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Specialized::NameValueCollection>(value));
}
constexpr System::Collections::Specialized::NameValueCollection System::Net::WebHeaderCollection::__get_m_InnerCollection() const {
return ::cordl_internals::getInstanceField<System::Collections::Specialized::NameValueCollection, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebHeaderCollection::__set_m_Type(System::Net::WebHeaderCollectionType value)  {
::cordl_internals::setInstanceField<System::Net::WebHeaderCollectionType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebHeaderCollectionType>(value));
}
constexpr System::Net::WebHeaderCollectionType System::Net::WebHeaderCollection::__get_m_Type() const {
return ::cordl_internals::getInstanceField<System::Net::WebHeaderCollectionType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::WebHeaderCollection::__set_HttpTrimCharacters(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "HttpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> System::Net::WebHeaderCollection::__get_HttpTrimCharacters()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "HttpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>();
}
 void System::Net::WebHeaderCollection::__set_RfcCharMap(::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar>, "RfcCharMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>(std::forward<::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar>>(value));
}
 ::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar> System::Net::WebHeaderCollection::__get_RfcCharMap()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar>, "RfcCharMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get>();
}
 void System::Net::WebHeaderCollection::NormalizeCommonHeaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "NormalizeCommonHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Specialized::NameValueCollection System::Net::WebHeaderCollection::get_InnerCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "get_InnerCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Specialized::NameValueCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::WebHeaderCollection::AllowMultiValues(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "AllowMultiValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name);
}
 bool System::Net::WebHeaderCollection::get_AllowHttpRequestHeader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "get_AllowHttpRequestHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebHeaderCollection::Remove(System::Net::HttpRequestHeader header)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpRequestHeader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, header);
}
 void System::Net::WebHeaderCollection::AddInternal(::StringW name, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "AddInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 void System::Net::WebHeaderCollection::ChangeInternal(::StringW name, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ChangeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 void System::Net::WebHeaderCollection::RemoveInternal(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "RemoveInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::StringW System::Net::WebHeaderCollection::CheckBadChars(::StringW name, bool isHeaderValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "CheckBadChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name, isHeaderValue);
}
 bool System::Net::WebHeaderCollection::ContainsNonAsciiChars(::StringW token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ContainsNonAsciiChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
 void System::Net::WebHeaderCollection::ThrowOnRestrictedHeader(::StringW headerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ThrowOnRestrictedHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headerName);
}
 void System::Net::WebHeaderCollection::Add(::StringW name, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 void System::Net::WebHeaderCollection::Add(::StringW header)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, header);
}
 void System::Net::WebHeaderCollection::Set(::StringW name, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 void System::Net::WebHeaderCollection::SetInternal(::StringW name, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "SetInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, value);
}
 void System::Net::WebHeaderCollection::Remove(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::ArrayW<::StringW> System::Net::WebHeaderCollection::GetValues(::StringW header)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, header);
}
 ::StringW System::Net::WebHeaderCollection::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::WebHeaderCollection::GetAsString(System::Collections::Specialized::NameValueCollection cc, bool winInetCompat, bool forTrace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Specialized::NameValueCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cc, winInetCompat, forTrace);
}
// Ctor Parameters []
 System::Net::WebHeaderCollection::WebHeaderCollection()  : System::Collections::Specialized::NameValueCollection(THROW_UNLESS(::il2cpp_utils::New<WebHeaderCollection>())) {}
 void System::Net::WebHeaderCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "System::Net::WebHeaderCollectionType", modifiers: "", def_value: None }]
 System::Net::WebHeaderCollection::WebHeaderCollection(System::Net::WebHeaderCollectionType type)  : System::Collections::Specialized::NameValueCollection(THROW_UNLESS(::il2cpp_utils::New<WebHeaderCollection>(type))) {}
 void System::Net::WebHeaderCollection::_ctor(System::Net::WebHeaderCollectionType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebHeaderCollectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Net::WebHeaderCollection::WebHeaderCollection(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  : System::Collections::Specialized::NameValueCollection(THROW_UNLESS(::il2cpp_utils::New<WebHeaderCollection>(serializationInfo, streamingContext))) {}
 void System::Net::WebHeaderCollection::_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Net::WebHeaderCollection::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void System::Net::WebHeaderCollection::GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 ::StringW System::Net::WebHeaderCollection::Get(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Collections::IEnumerator System::Net::WebHeaderCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::WebHeaderCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::WebHeaderCollection::Get(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::ArrayW<::StringW> System::Net::WebHeaderCollection::GetValues(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::StringW System::Net::WebHeaderCollection::GetKey(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebHeaderCollection>::get(),
                            "GetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, index);
}
