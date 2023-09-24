#pragma once
#include "Newtonsoft/Json/Utilities/zzzz__DateTimeUtils_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/Xml/zzzz__XmlDateTimeSerializationMode_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DateTimeParser_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(System::DateTime)>(&Newtonsoft::Json::Utilities::DateTimeUtils::GetUtcOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e6e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ToSerializationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlDateTimeSerializationMode (*)(System::DateTimeKind)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ToSerializationMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24e6e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ToSerializationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.EnsureDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::DateTime, Newtonsoft::Json::DateTimeZoneHandling)>(&Newtonsoft::Json::Utilities::DateTimeUtils::EnsureDateTime)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24e6ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "EnsureDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.SwitchToLocalTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::DateTime)>(&Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToLocalTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24e7000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "SwitchToLocalTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.SwitchToUtcTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::DateTime)>(&Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToUtcTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24e7078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "SwitchToUtcTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ToUniversalTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::DateTime)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24e70f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ToUniversalTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ToUniversalTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::DateTime, System::TimeSpan)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24e717c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ToUniversalTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ConvertDateTimeToJavaScriptTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::DateTime, System::TimeSpan)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24e7284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertDateTimeToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ConvertDateTimeToJavaScriptTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::DateTime)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24e7368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertDateTimeToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ConvertDateTimeToJavaScriptTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::DateTime, bool)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24e73c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertDateTimeToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.UniversialTicksToJavaScriptTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&Newtonsoft::Json::Utilities::DateTimeUtils::UniversialTicksToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24e72ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "UniversialTicksToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.ConvertJavaScriptTicksToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(int64_t)>(&Newtonsoft::Json::Utilities::DateTimeUtils::ConvertJavaScriptTicksToDateTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24de2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertJavaScriptTicksToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeIso
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, Newtonsoft::Json::DateTimeZoneHandling, ByRef<System::DateTime>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeIso)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x24e7458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeIso",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffsetIso
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, ByRef<System::DateTimeOffset>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetIso)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x24e7844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffsetIso",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.CreateDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(Newtonsoft::Json::Utilities::DateTimeParser)>(&Newtonsoft::Json::Utilities::DateTimeUtils::CreateDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24e77c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "CreateDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::DateTimeParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, Newtonsoft::Json::DateTimeZoneHandling, ::StringW, System::Globalization::CultureInfo, ByRef<System::DateTime>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x24e7a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, Newtonsoft::Json::DateTimeZoneHandling, ::StringW, System::Globalization::CultureInfo, ByRef<System::DateTime>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x24e7e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, ::StringW, System::Globalization::CultureInfo, ByRef<System::DateTimeOffset>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x24e8130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, System::Globalization::CultureInfo, ByRef<System::DateTimeOffset>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x24e8528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseMicrosoftDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, ByRef<int64_t>, ByRef<System::TimeSpan>, ByRef<System::DateTimeKind>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseMicrosoftDate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x24e87dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseMicrosoftDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeKind>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeMicrosoft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, Newtonsoft::Json::DateTimeZoneHandling, ByRef<System::DateTime>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeMicrosoft)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24e7c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeMicrosoft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, Newtonsoft::Json::DateTimeZoneHandling, ::StringW, System::Globalization::CultureInfo, ByRef<System::DateTime>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeExact)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24e7d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffsetMicrosoft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, ByRef<System::DateTimeOffset>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetMicrosoft)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24e8340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffsetMicrosoft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffsetExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, System::Globalization::CultureInfo, ByRef<System::DateTimeOffset>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetExact)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24e8478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffsetExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.TryReadOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Newtonsoft::Json::Utilities::StringReference, int32_t, ByRef<System::TimeSpan>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::TryReadOffset)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x24e8950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryReadOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::TextWriter, System::DateTime, Newtonsoft::Json::DateFormatHandling, ::StringW, System::Globalization::CultureInfo)>(&Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24e8ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, System::DateTime, System::Nullable_1<System::TimeSpan>, System::DateTimeKind, Newtonsoft::Json::DateFormatHandling)>(&Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x24e8bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<System::TimeSpan>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.WriteDefaultIsoDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, System::DateTime)>(&Newtonsoft::Json::Utilities::DateTimeUtils::WriteDefaultIsoDate)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x24e9078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDefaultIsoDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.CopyIntToCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&Newtonsoft::Json::Utilities::DateTimeUtils::CopyIntToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24e9508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "CopyIntToCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, System::TimeSpan, Newtonsoft::Json::DateFormatHandling)>(&Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffset)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x24e8f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeOffsetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::TextWriter, System::DateTimeOffset, Newtonsoft::Json::DateFormatHandling, ::StringW, System::Globalization::CultureInfo)>(&Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffsetString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x24e9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeOffsetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::DateTimeUtils.GetDateValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::DateTime, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(&Newtonsoft::Json::Utilities::DateTimeUtils::GetDateValues)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x24e9310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "GetDateValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Utilities::DateTimeUtils::__set_InitialJavaScriptDateTicks(int64_t value)  {
::cordl_internals::setStaticField<int64_t, "InitialJavaScriptDateTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get>(std::forward<int64_t>(value));
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::__get_InitialJavaScriptDateTicks()  {
return ::cordl_internals::getStaticField<int64_t, "InitialJavaScriptDateTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get>();
}
 void Newtonsoft::Json::Utilities::DateTimeUtils::__set_DaysToMonth365(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Newtonsoft::Json::Utilities::DateTimeUtils::__get_DaysToMonth365()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get>();
}
 void Newtonsoft::Json::Utilities::DateTimeUtils::__set_DaysToMonth366(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Newtonsoft::Json::Utilities::DateTimeUtils::__get_DaysToMonth366()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get>();
}
 System::TimeSpan Newtonsoft::Json::Utilities::DateTimeUtils::GetUtcOffset(System::DateTime d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(nullptr, ___internal_method, d);
}
 System::Xml::XmlDateTimeSerializationMode Newtonsoft::Json::Utilities::DateTimeUtils::ToSerializationMode(System::DateTimeKind kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ToSerializationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlDateTimeSerializationMode, false>(nullptr, ___internal_method, kind);
}
 System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::EnsureDateTime(System::DateTime value, Newtonsoft::Json::DateTimeZoneHandling timeZone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "EnsureDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, value, timeZone);
}
 System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToLocalTime(System::DateTime value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "SwitchToLocalTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, value);
}
 System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToUtcTime(System::DateTime value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "SwitchToUtcTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, value);
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks(System::DateTime dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ToUniversalTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime);
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks(System::DateTime dateTime, System::TimeSpan offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ToUniversalTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime, offset);
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System::DateTime dateTime, System::TimeSpan offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertDateTimeToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime, offset);
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System::DateTime dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertDateTimeToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime);
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System::DateTime dateTime, bool convertToUtc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertDateTimeToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime, convertToUtc);
}
 int64_t Newtonsoft::Json::Utilities::DateTimeUtils::UniversialTicksToJavaScriptTicks(int64_t universialTicks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "UniversialTicksToJavaScriptTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, universialTicks);
}
 System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "ConvertJavaScriptTicksToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, javaScriptTicks);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeIso(Newtonsoft::Json::Utilities::StringReference text, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ByRef<System::DateTime> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeIso",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, dateTimeZoneHandling, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetIso(Newtonsoft::Json::Utilities::StringReference text, ByRef<System::DateTimeOffset> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffsetIso",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, dt);
}
 System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::CreateDateTime(Newtonsoft::Json::Utilities::DateTimeParser dateTimeParser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "CreateDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::DateTimeParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, dateTimeParser);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime(Newtonsoft::Json::Utilities::StringReference s, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTime> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dateTimeZoneHandling, dateFormatString, culture, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime(::StringW s, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTime> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dateTimeZoneHandling, dateFormatString, culture, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset(Newtonsoft::Json::Utilities::StringReference s, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTimeOffset> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dateFormatString, culture, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset(::StringW s, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTimeOffset> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dateFormatString, culture, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseMicrosoftDate(Newtonsoft::Json::Utilities::StringReference text, ByRef<int64_t> ticks, ByRef<System::TimeSpan> offset, ByRef<System::DateTimeKind> kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseMicrosoftDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeKind>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, ticks, offset, kind);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft::Json::Utilities::StringReference text, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ByRef<System::DateTime> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeMicrosoft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, dateTimeZoneHandling, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeExact(::StringW text, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTime> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateTimeZoneHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, dateTimeZoneHandling, dateFormatString, culture, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetMicrosoft(Newtonsoft::Json::Utilities::StringReference text, ByRef<System::DateTimeOffset> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffsetMicrosoft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetExact(::StringW text, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTimeOffset> dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryParseDateTimeOffsetExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeOffset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, dateFormatString, culture, dt);
}
 bool Newtonsoft::Json::Utilities::DateTimeUtils::TryReadOffset(Newtonsoft::Json::Utilities::StringReference offsetText, int32_t startIndex, ByRef<System::TimeSpan> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "TryReadOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::StringReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, offsetText, startIndex, offset);
}
 void Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString(System::IO::TextWriter writer, System::DateTime value, Newtonsoft::Json::DateFormatHandling format, ::StringW formatString, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, value, format, formatString, culture);
}
 int32_t Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString(::ArrayW<char16_t> chars, int32_t start, System::DateTime value, System::Nullable_1<System::TimeSpan> offset, System::DateTimeKind kind, Newtonsoft::Json::DateFormatHandling format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<System::TimeSpan>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, chars, start, value, offset, kind, format);
}
 int32_t Newtonsoft::Json::Utilities::DateTimeUtils::WriteDefaultIsoDate(::ArrayW<char16_t> chars, int32_t start, System::DateTime dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDefaultIsoDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, chars, start, dt);
}
 void Newtonsoft::Json::Utilities::DateTimeUtils::CopyIntToCharArray(::ArrayW<char16_t> chars, int32_t start, int32_t value, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "CopyIntToCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, chars, start, value, digits);
}
 int32_t Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffset(::ArrayW<char16_t> chars, int32_t start, System::TimeSpan offset, Newtonsoft::Json::DateFormatHandling format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, chars, start, offset, format);
}
 void Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffsetString(System::IO::TextWriter writer, System::DateTimeOffset value, Newtonsoft::Json::DateFormatHandling format, ::StringW formatString, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "WriteDateTimeOffsetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTimeOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DateFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, value, format, formatString, culture);
}
 void Newtonsoft::Json::Utilities::DateTimeUtils::GetDateValues(System::DateTime td, ByRef<int32_t> year, ByRef<int32_t> month, ByRef<int32_t> day)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DateTimeUtils>::get(),
                            "GetDateValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, td, year, month, day);
}
