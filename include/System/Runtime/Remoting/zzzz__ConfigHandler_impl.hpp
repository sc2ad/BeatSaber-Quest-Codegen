#pragma once
#include "System/Runtime/Remoting/zzzz__ConfigHandler_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(bool)>(&System::Runtime::Remoting::ConfigHandler::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x231ba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ValidatePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::ArrayW<::StringW>)>(&System::Runtime::Remoting::ConfigHandler::ValidatePath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x231f104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ValidatePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.CheckPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::CheckPath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x231f1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "CheckPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnStartParsing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser)>(&System::Runtime::Remoting::ConfigHandler::OnStartParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x231f2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnStartParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::SmallXmlParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnProcessingInstruction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x231f2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnProcessingInstruction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnIgnorableWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x231f2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnIgnorableWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnStartElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::OnStartElement)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x231f2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnStartElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ParseElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ParseElement)> {
  constexpr static std::size_t size = 0x1050;
  constexpr static std::size_t addrs = 0x231f48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnEndElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2321e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadCustomProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x23204e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadCustomProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadLifetine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadLifetine)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2320844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadLifetine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ParseTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::ParseTime)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2321eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ParseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadChannel)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2320d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ProviderData (System::Runtime::Remoting::ConfigHandler::*)(::StringW, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadProvider)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x232113c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadClientActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadClientActivated)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2321804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadClientActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadServiceActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadServiceActivated)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2321948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadServiceActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadClientWellKnown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2321524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadClientWellKnown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadServiceWellKnown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2321618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadServiceWellKnown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadInteropXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList, bool)>(&System::Runtime::Remoting::ConfigHandler::ReadInteropXml)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2321a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadInteropXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ReadPreload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList)>(&System::Runtime::Remoting::ConfigHandler::ReadPreload)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2321bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadPreload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.GetNotNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList, ::StringW)>(&System::Runtime::Remoting::ConfigHandler::GetNotNull)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2322414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "GetNotNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.ExtractAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ConfigHandler::*)(ByRef<::StringW>)>(&System::Runtime::Remoting::ConfigHandler::ExtractAssembly)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x232254c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ExtractAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&System::Runtime::Remoting::ConfigHandler::OnChars)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x232260c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ConfigHandler.OnEndParsing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ConfigHandler::*)(Mono::Xml::SmallXmlParser)>(&System::Runtime::Remoting::ConfigHandler::OnEndParsing)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2322610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnEndParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::SmallXmlParser>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler
constexpr  System::Runtime::Remoting::ConfigHandler::operator Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler() const noexcept {
return Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_typeEntries(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Runtime::Remoting::ConfigHandler::__get_typeEntries() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_channelInstances(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Runtime::Remoting::ConfigHandler::__get_channelInstances() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_currentChannel(System::Runtime::Remoting::ChannelData value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::ChannelData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::ChannelData>(value));
}
constexpr System::Runtime::Remoting::ChannelData System::Runtime::Remoting::ConfigHandler::__get_currentChannel() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::ChannelData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_currentProviderData(System::Collections::Stack value)  {
::cordl_internals::setInstanceField<System::Collections::Stack, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Stack>(value));
}
constexpr System::Collections::Stack System::Runtime::Remoting::ConfigHandler::__get_currentProviderData() const {
return ::cordl_internals::getInstanceField<System::Collections::Stack, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_currentClientUrl(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::ConfigHandler::__get_currentClientUrl() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_appName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::ConfigHandler::__get_appName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_currentXmlPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::ConfigHandler::__get_currentXmlPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::ConfigHandler::__set_onlyDelayedChannels(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::Remoting::ConfigHandler::__get_onlyDelayedChannels() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onlyDelayedChannels", ty: "bool", modifiers: "", def_value: None }]
 System::Runtime::Remoting::ConfigHandler::ConfigHandler(bool onlyDelayedChannels)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConfigHandler>(onlyDelayedChannels))) {}
 void System::Runtime::Remoting::ConfigHandler::_ctor(bool onlyDelayedChannels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onlyDelayedChannels);
}
 void System::Runtime::Remoting::ConfigHandler::ValidatePath(::StringW element, ::ArrayW<::StringW> paths)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ValidatePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element, paths);
}
 bool System::Runtime::Remoting::ConfigHandler::CheckPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "CheckPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path);
}
 void System::Runtime::Remoting::ConfigHandler::OnStartParsing(Mono::Xml::SmallXmlParser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnStartParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::SmallXmlParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parser);
}
 void System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction(::StringW name, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnProcessingInstruction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, text);
}
 void System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnIgnorableWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void System::Runtime::Remoting::ConfigHandler::OnStartElement(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnStartElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::ParseElement(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::OnEndElement(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadCustomProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::ReadLifetine(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadLifetine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs);
}
 System::TimeSpan System::Runtime::Remoting::ConfigHandler::ParseTime(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ParseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void System::Runtime::Remoting::ConfigHandler::ReadChannel(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, bool isTemplate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs, isTemplate);
}
 System::Runtime::Remoting::ProviderData System::Runtime::Remoting::ConfigHandler::ReadProvider(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, bool isTemplate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ProviderData, false>(const_cast<void*>(instance), ___internal_method, name, attrs, isTemplate);
}
 void System::Runtime::Remoting::ConfigHandler::ReadClientActivated(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadClientActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::ReadServiceActivated(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadServiceActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadClientWellKnown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadServiceWellKnown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs);
}
 void System::Runtime::Remoting::ConfigHandler::ReadInteropXml(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, bool isElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadInteropXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs, isElement);
}
 void System::Runtime::Remoting::ConfigHandler::ReadPreload(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ReadPreload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrs);
}
 ::StringW System::Runtime::Remoting::ConfigHandler::GetNotNull(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "GetNotNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, attrs, name);
}
 ::StringW System::Runtime::Remoting::ConfigHandler::ExtractAssembly(ByRef<::StringW> type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "ExtractAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, type);
}
 void System::Runtime::Remoting::ConfigHandler::OnChars(::StringW ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 void System::Runtime::Remoting::ConfigHandler::OnEndParsing(Mono::Xml::SmallXmlParser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ConfigHandler>::get(),
                            "OnEndParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Xml::SmallXmlParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parser);
}
