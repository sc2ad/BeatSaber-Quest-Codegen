#pragma once
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::Newtonsoft__Json__Bson__BsonReader__BsonReaderState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::Normal{0};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::ReferenceStart{1};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::ReferenceRef{2};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::ReferenceId{3};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::CodeWScopeStart{4};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::CodeWScopeCode{5};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::CodeWScopeScope{6};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::CodeWScopeScopeObject{7};
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState  Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState::CodeWScopeScopeEnd{8};
//  Writing Method size for method: Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::*)(Newtonsoft::Json::Bson::BsonType)>(&Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x254f174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::__set_Type(Newtonsoft::Json::Bson::BsonType value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Bson::BsonType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Bson::BsonType>(value));
}
constexpr Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::__get_Type() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Bson::BsonType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::__set_Length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::__get_Length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::__set_Position(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::__get_Position() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::New_ctor(Newtonsoft::Json::Bson::BsonType type)  {
Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>(type))};
return o;
}
 void Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext::_ctor(Newtonsoft::Json::Bson::BsonType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.get_JsonNet35BinaryCompatibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::get_JsonNet35BinaryCompatibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254e494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "get_JsonNet35BinaryCompatibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.set_JsonNet35BinaryCompatibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(bool)>(&Newtonsoft::Json::Bson::BsonReader::set_JsonNet35BinaryCompatibility)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x254e49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "set_JsonNet35BinaryCompatibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.get_ReadRootValueAsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::get_ReadRootValueAsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254e4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "get_ReadRootValueAsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.set_ReadRootValueAsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(bool)>(&Newtonsoft::Json::Bson::BsonReader::set_ReadRootValueAsArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x254e4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "set_ReadRootValueAsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.get_DateTimeKindHandling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTimeKind (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254e4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "get_DateTimeKindHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.set_DateTimeKindHandling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(System::DateTimeKind)>(&Newtonsoft::Json::Bson::BsonReader::set_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254e4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "set_DateTimeKindHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(System::IO::Stream)>(&Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x254e4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(System::IO::BinaryReader)>(&Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x254e5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::BinaryReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(System::IO::Stream, bool, System::DateTimeKind)>(&Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x254e4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(System::IO::BinaryReader, bool, System::DateTimeKind)>(&Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x254e5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::BinaryReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x254e6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::Read)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x254e974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Bson::BsonReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x254f0ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Bson::BsonReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadCodeWScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x254eecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadCodeWScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadReference)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x254ed10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadNormal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x254eb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.PopContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::PopContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x254f7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "PopContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.PushContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext)>(&Newtonsoft::Json::Bson::BsonReader::PushContext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x254f19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "PushContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x254f7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(Newtonsoft::Json::Bson::BsonType)>(&Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x254f27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadBinary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Bson::BsonReader::*)(ByRef<Newtonsoft::Json::Bson::BsonBinaryType>)>(&Newtonsoft::Json::Bson::BsonReader::ReadBinary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x254f8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Bson::BsonBinaryType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x254e704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadLengthString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadLengthString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x254f11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadLengthString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&Newtonsoft::Json::Bson::BsonReader::GetString)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x254faa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.GetLastFullCharStop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x254fa20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "GetLastFullCharStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.BytesInSequence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::Bson::BsonReader::*)(uint8_t)>(&Newtonsoft::Json::Bson::BsonReader::BytesInSequence)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x254fd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "BytesInSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.EnsureBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::EnsureBuffers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x254f974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "EnsureBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadDouble)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x254f8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadInt32)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x254f0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadInt64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x254f93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonReader::*)()>(&Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x254e6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.MovePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&Newtonsoft::Json::Bson::BsonReader::MovePosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x254f888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "MovePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonReader.ReadBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&Newtonsoft::Json::Bson::BsonReader::ReadBytes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x254f244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Bson::BsonReader::__set_SeqRange1(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::__get_SeqRange1()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>();
}
 void Newtonsoft::Json::Bson::BsonReader::__set_SeqRange2(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::__get_SeqRange2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>();
}
 void Newtonsoft::Json::Bson::BsonReader::__set_SeqRange3(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::__get_SeqRange3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>();
}
 void Newtonsoft::Json::Bson::BsonReader::__set_SeqRange4(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::__get_SeqRange4()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get>();
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__reader(System::IO::BinaryReader value)  {
::cordl_internals::setInstanceField<System::IO::BinaryReader, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::BinaryReader>(value));
}
constexpr System::IO::BinaryReader Newtonsoft::Json::Bson::BsonReader::__get__reader() const {
return ::cordl_internals::getInstanceField<System::IO::BinaryReader, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__stack(System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>>(value));
}
constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext> Newtonsoft::Json::Bson::BsonReader::__get__stack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__byteBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::__get__byteBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__charBuffer(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> Newtonsoft::Json::Bson::BsonReader::__get__charBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__currentElementType(Newtonsoft::Json::Bson::BsonType value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Bson::BsonType, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Bson::BsonType>(value));
}
constexpr Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonReader::__get__currentElementType() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Bson::BsonType, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__bsonReaderState(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState>(value));
}
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState Newtonsoft::Json::Bson::BsonReader::__get__bsonReaderState() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__BsonReaderState, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__currentContext(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>(value));
}
constexpr Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext Newtonsoft::Json::Bson::BsonReader::__get__currentContext() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__readRootValueAsArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Newtonsoft::Json::Bson::BsonReader::__get__readRootValueAsArray() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__jsonNet35BinaryCompatibility(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Newtonsoft::Json::Bson::BsonReader::__get__jsonNet35BinaryCompatibility() const {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__set__dateTimeKindHandling(System::DateTimeKind value)  {
::cordl_internals::setInstanceField<System::DateTimeKind, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTimeKind>(value));
}
constexpr System::DateTimeKind Newtonsoft::Json::Bson::BsonReader::__get__dateTimeKindHandling() const {
return ::cordl_internals::getInstanceField<System::DateTimeKind, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Newtonsoft::Json::Bson::BsonReader::get_JsonNet35BinaryCompatibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "get_JsonNet35BinaryCompatibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::set_JsonNet35BinaryCompatibility(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "set_JsonNet35BinaryCompatibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool Newtonsoft::Json::Bson::BsonReader::get_ReadRootValueAsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "get_ReadRootValueAsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::set_ReadRootValueAsArray(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "set_ReadRootValueAsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::DateTimeKind Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "get_DateTimeKindHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTimeKind, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::set_DateTimeKindHandling(System::DateTimeKind value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "set_DateTimeKindHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Newtonsoft::Json::Bson::BsonReader Newtonsoft::Json::Bson::BsonReader::New_ctor(System::IO::Stream stream)  {
Newtonsoft::Json::Bson::BsonReader o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Bson::BsonReader>(stream))};
return o;
}
 void Newtonsoft::Json::Bson::BsonReader::_ctor(System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 Newtonsoft::Json::Bson::BsonReader Newtonsoft::Json::Bson::BsonReader::New_ctor(System::IO::BinaryReader reader)  {
Newtonsoft::Json::Bson::BsonReader o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Bson::BsonReader>(reader))};
return o;
}
 void Newtonsoft::Json::Bson::BsonReader::_ctor(System::IO::BinaryReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::BinaryReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 Newtonsoft::Json::Bson::BsonReader Newtonsoft::Json::Bson::BsonReader::New_ctor(System::IO::Stream stream, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling)  {
Newtonsoft::Json::Bson::BsonReader o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Bson::BsonReader>(stream, readRootValueAsArray, dateTimeKindHandling))};
return o;
}
 void Newtonsoft::Json::Bson::BsonReader::_ctor(System::IO::Stream stream, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, readRootValueAsArray, dateTimeKindHandling);
}
 Newtonsoft::Json::Bson::BsonReader Newtonsoft::Json::Bson::BsonReader::New_ctor(System::IO::BinaryReader reader, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling)  {
Newtonsoft::Json::Bson::BsonReader o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Bson::BsonReader>(reader, readRootValueAsArray, dateTimeKindHandling))};
return o;
}
 void Newtonsoft::Json::Bson::BsonReader::_ctor(System::IO::BinaryReader reader, bool readRootValueAsArray, System::DateTimeKind dateTimeKindHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::BinaryReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, readRootValueAsArray, dateTimeKindHandling);
}
 ::StringW Newtonsoft::Json::Bson::BsonReader::ReadElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Bson::BsonReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadCodeWScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Bson::BsonReader::ReadReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Bson::BsonReader::ReadNormal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::PopContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "PopContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::PushContext(Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext newContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "PushContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::Newtonsoft__Json__Bson__BsonReader__ContainerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newContext);
}
 uint8_t Newtonsoft::Json::Bson::BsonReader::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::ReadType(Newtonsoft::Json::Bson::BsonType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::ReadBinary(ByRef<Newtonsoft::Json::Bson::BsonBinaryType> binaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Bson::BsonBinaryType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, binaryType);
}
 ::StringW Newtonsoft::Json::Bson::BsonReader::ReadString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Newtonsoft::Json::Bson::BsonReader::ReadLengthString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadLengthString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Newtonsoft::Json::Bson::BsonReader::GetString(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, length);
}
 int32_t Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop(int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "GetLastFullCharStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, start);
}
 int32_t Newtonsoft::Json::Bson::BsonReader::BytesInSequence(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "BytesInSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Newtonsoft::Json::Bson::BsonReader::EnsureBuffers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "EnsureBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t Newtonsoft::Json::Bson::BsonReader::ReadDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Newtonsoft::Json::Bson::BsonReader::ReadInt32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t Newtonsoft::Json::Bson::BsonReader::ReadInt64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonReader::ReadType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Bson::BsonType, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonReader::MovePosition(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "MovePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, count);
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::ReadBytes(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonReader>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, count);
}
