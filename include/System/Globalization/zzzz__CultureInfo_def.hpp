#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class ICloneable;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace System {
class Exception;
}
namespace System::Globalization {
class TextInfo;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct CultureTypes;
}
namespace System {
class IFormatProvider;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class Calendar;
}
// Forward declare root types
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate;
}
namespace System::Globalization {
struct ____System__Globalization__CultureInfo__Data;
}
// Type: ::Data
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3705))
// CS Name: System.Globalization.CultureInfo::Data
struct CORDL_TYPE ____System__Globalization__CultureInfo__Data : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____System__Globalization__CultureInfo__Data(int32_t ansi, int32_t ebcdic, int32_t mac, int32_t oem, bool right_to_left, uint8_t list_sep) noexcept;


                    constexpr ____System__Globalization__CultureInfo__Data(____System__Globalization__CultureInfo__Data const&) = default;
                    constexpr ____System__Globalization__CultureInfo__Data(____System__Globalization__CultureInfo__Data&&) = default;
                    constexpr ____System__Globalization__CultureInfo__Data& operator=(____System__Globalization__CultureInfo__Data const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Globalization__CultureInfo__Data& operator=(____System__Globalization__CultureInfo__Data&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Globalization__CultureInfo__Data(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_ansi, put=__set_ansi))  ansi;

constexpr void __set_ansi(int32_t value) ;

constexpr int32_t __get_ansi() const;

 int32_t __declspec(property(get=__get_ebcdic, put=__set_ebcdic))  ebcdic;

constexpr void __set_ebcdic(int32_t value) ;

constexpr int32_t __get_ebcdic() const;

 int32_t __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(int32_t value) ;

constexpr int32_t __get_mac() const;

 int32_t __declspec(property(get=__get_oem, put=__set_oem))  oem;

constexpr void __set_oem(int32_t value) ;

constexpr int32_t __get_oem() const;

 bool __declspec(property(get=__get_right_to_left, put=__set_right_to_left))  right_to_left;

constexpr void __set_right_to_left(bool value) ;

constexpr bool __get_right_to_left() const;

 uint8_t __declspec(property(get=__get_list_sep, put=__set_list_sep))  list_sep;

constexpr void __set_list_sep(uint8_t value) ;

constexpr uint8_t __get_list_sep() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::OnCultureInfoChangedDelegate
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3706))
// CS Name: System.Globalization.CultureInfo::OnCultureInfoChangedDelegate
class CORDL_TYPE ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate", modifiers: " const&", def_value: None }]
constexpr ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate(____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate", modifiers: "&&", def_value: None }]
constexpr ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate(____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate& operator=(____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate&& o) noexcept = default;
  constexpr ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate& operator=(____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2409ef0 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2409fc4 size 0x14 virtual true final false
 void Invoke(::StringW language) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::CultureInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3707))
// CS Name: System.Globalization.CultureInfo
class CORDL_TYPE CultureInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OnCultureInfoChangedDelegate = ::System::Globalization::____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate;

using Data = ::System::Globalization::____System__Globalization__CultureInfo__Data;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief Convert operator to ::System::IFormatProvider
constexpr operator  ::System::IFormatProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~CultureInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureInfo", modifiers: " const&", def_value: None }]
constexpr CultureInfo(CultureInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureInfo", modifiers: "&&", def_value: None }]
constexpr CultureInfo(CultureInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CultureInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CultureInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CultureInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CultureInfo& operator=(CultureInfo&& o) noexcept = default;
  constexpr CultureInfo& operator=(CultureInfo const& o) noexcept = default;
                


// Fields

static ::System::Globalization::CultureInfo __declspec(property(get=__get_invariant_culture_info, put=__set_invariant_culture_info))  invariant_culture_info;

static void __set_invariant_culture_info(::System::Globalization::CultureInfo value) ;

static ::System::Globalization::CultureInfo __get_invariant_culture_info() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_shared_table_lock, put=__set_shared_table_lock))  shared_table_lock;

static void __set_shared_table_lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_shared_table_lock() ;

static ::System::Globalization::CultureInfo __declspec(property(get=__get_default_current_culture, put=__set_default_current_culture))  default_current_culture;

static void __set_default_current_culture(::System::Globalization::CultureInfo value) ;

static ::System::Globalization::CultureInfo __get_default_current_culture() ;

 bool __declspec(property(get=__get_m_isReadOnly, put=__set_m_isReadOnly))  m_isReadOnly;

constexpr void __set_m_isReadOnly(bool value) ;

constexpr bool __get_m_isReadOnly() const;

 int32_t __declspec(property(get=__get_cultureID, put=__set_cultureID))  cultureID;

constexpr void __set_cultureID(int32_t value) ;

constexpr int32_t __get_cultureID() const;

 int32_t __declspec(property(get=__get_parent_lcid, put=__set_parent_lcid))  parent_lcid;

constexpr void __set_parent_lcid(int32_t value) ;

constexpr int32_t __get_parent_lcid() const;

 int32_t __declspec(property(get=__get_datetime_index, put=__set_datetime_index))  datetime_index;

constexpr void __set_datetime_index(int32_t value) ;

constexpr int32_t __get_datetime_index() const;

 int32_t __declspec(property(get=__get_number_index, put=__set_number_index))  number_index;

constexpr void __set_number_index(int32_t value) ;

constexpr int32_t __get_number_index() const;

 int32_t __declspec(property(get=__get_default_calendar_type, put=__set_default_calendar_type))  default_calendar_type;

constexpr void __set_default_calendar_type(int32_t value) ;

constexpr int32_t __get_default_calendar_type() const;

 bool __declspec(property(get=__get_m_useUserOverride, put=__set_m_useUserOverride))  m_useUserOverride;

constexpr void __set_m_useUserOverride(bool value) ;

constexpr bool __get_m_useUserOverride() const;

 ::System::Globalization::NumberFormatInfo __declspec(property(get=__get_numInfo, put=__set_numInfo))  numInfo;

constexpr void __set_numInfo(::System::Globalization::NumberFormatInfo value) ;

constexpr ::System::Globalization::NumberFormatInfo __get_numInfo() const;

 ::System::Globalization::DateTimeFormatInfo __declspec(property(get=__get_dateTimeInfo, put=__set_dateTimeInfo))  dateTimeInfo;

constexpr void __set_dateTimeInfo(::System::Globalization::DateTimeFormatInfo value) ;

constexpr ::System::Globalization::DateTimeFormatInfo __get_dateTimeInfo() const;

 ::System::Globalization::TextInfo __declspec(property(get=__get_textInfo, put=__set_textInfo))  textInfo;

constexpr void __set_textInfo(::System::Globalization::TextInfo value) ;

constexpr ::System::Globalization::TextInfo __get_textInfo() const;

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 ::StringW __declspec(property(get=__get_englishname, put=__set_englishname))  englishname;

constexpr void __set_englishname(::StringW value) ;

constexpr ::StringW __get_englishname() const;

 ::StringW __declspec(property(get=__get_nativename, put=__set_nativename))  nativename;

constexpr void __set_nativename(::StringW value) ;

constexpr ::StringW __get_nativename() const;

 ::StringW __declspec(property(get=__get_iso3lang, put=__set_iso3lang))  iso3lang;

constexpr void __set_iso3lang(::StringW value) ;

constexpr ::StringW __get_iso3lang() const;

 ::StringW __declspec(property(get=__get_iso2lang, put=__set_iso2lang))  iso2lang;

constexpr void __set_iso2lang(::StringW value) ;

constexpr ::StringW __get_iso2lang() const;

 ::StringW __declspec(property(get=__get_win3lang, put=__set_win3lang))  win3lang;

constexpr void __set_win3lang(::StringW value) ;

constexpr ::StringW __get_win3lang() const;

 ::StringW __declspec(property(get=__get_territory, put=__set_territory))  territory;

constexpr void __set_territory(::StringW value) ;

constexpr ::StringW __get_territory() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_native_calendar_names, put=__set_native_calendar_names))  native_calendar_names;

constexpr void __set_native_calendar_names(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_native_calendar_names() const;

 ::System::Globalization::CompareInfo __declspec(property(get=__get_compareInfo, put=__set_compareInfo))  compareInfo;

constexpr void __set_compareInfo(::System::Globalization::CompareInfo value) ;

constexpr ::System::Globalization::CompareInfo __get_compareInfo() const;

 void* __declspec(property(get=__get_textinfo_data, put=__set_textinfo_data))  textinfo_data;

constexpr void __set_textinfo_data(void* value) ;

constexpr void* __get_textinfo_data() const;

 int32_t __declspec(property(get=__get_m_dataItem, put=__set_m_dataItem))  m_dataItem;

constexpr void __set_m_dataItem(int32_t value) ;

constexpr int32_t __get_m_dataItem() const;

 ::System::Globalization::Calendar __declspec(property(get=__get_calendar, put=__set_calendar))  calendar;

constexpr void __set_calendar(::System::Globalization::Calendar value) ;

constexpr ::System::Globalization::Calendar __get_calendar() const;

 ::System::Globalization::CultureInfo __declspec(property(get=__get_parent_culture, put=__set_parent_culture))  parent_culture;

constexpr void __set_parent_culture(::System::Globalization::CultureInfo value) ;

constexpr ::System::Globalization::CultureInfo __get_parent_culture() const;

 bool __declspec(property(get=__get_constructed, put=__set_constructed))  constructed;

constexpr void __set_constructed(bool value) ;

constexpr bool __get_constructed() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cached_serialized_form, put=__set_cached_serialized_form))  cached_serialized_form;

constexpr void __set_cached_serialized_form(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cached_serialized_form() const;

 ::System::Globalization::CultureData __declspec(property(get=__get_m_cultureData, put=__set_m_cultureData))  m_cultureData;

constexpr void __set_m_cultureData(::System::Globalization::CultureData value) ;

constexpr ::System::Globalization::CultureData __get_m_cultureData() const;

 bool __declspec(property(get=__get_m_isInherited, put=__set_m_isInherited))  m_isInherited;

constexpr void __set_m_isInherited(bool value) ;

constexpr bool __get_m_isInherited() const;

/// @brief Field InvariantCultureId offset 0
static constexpr int32_t  InvariantCultureId{127};

/// @brief Field CalendarTypeBits offset 0
static constexpr int32_t  CalendarTypeBits{8};

/// @brief Field LOCALE_INVARIANT offset 0
static constexpr int32_t  LOCALE_INVARIANT{127};

/// @brief Field MSG_READONLY offset 0
static constexpr ::ConstString  MSG_READONLY{u"This instance is read only"};

static ::System::Globalization::CultureInfo __declspec(property(get=__get_s_DefaultThreadCurrentUICulture, put=__set_s_DefaultThreadCurrentUICulture))  s_DefaultThreadCurrentUICulture;

static void __set_s_DefaultThreadCurrentUICulture(::System::Globalization::CultureInfo value) ;

static ::System::Globalization::CultureInfo __get_s_DefaultThreadCurrentUICulture() ;

static ::System::Globalization::CultureInfo __declspec(property(get=__get_s_DefaultThreadCurrentCulture, put=__set_s_DefaultThreadCurrentCulture))  s_DefaultThreadCurrentCulture;

static void __set_s_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo value) ;

static ::System::Globalization::CultureInfo __get_s_DefaultThreadCurrentCulture() ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo> __declspec(property(get=__get_shared_by_number, put=__set_shared_by_number))  shared_by_number;

static void __set_shared_by_number(::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo> value) ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo> __get_shared_by_number() ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo> __declspec(property(get=__get_shared_by_name, put=__set_shared_by_name))  shared_by_name;

static void __set_shared_by_name(::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo> __get_shared_by_name() ;

static ::System::Globalization::CultureInfo __declspec(property(get=__get_s_UserPreferredCultureInfoInAppX, put=__set_s_UserPreferredCultureInfoInAppX))  s_UserPreferredCultureInfoInAppX;

static void __set_s_UserPreferredCultureInfoInAppX(::System::Globalization::CultureInfo value) ;

static ::System::Globalization::CultureInfo __get_s_UserPreferredCultureInfoInAppX() ;

static bool __declspec(property(get=__get_IsTaiwanSku, put=__set_IsTaiwanSku))  IsTaiwanSku;

static void __set_IsTaiwanSku(bool value) ;

static bool __get_IsTaiwanSku() ;


// Properties

 ::System::Globalization::CultureData __declspec(property(get=get__cultureData))  _cultureData;

 bool __declspec(property(get=get__isInherited))  _isInherited;

static ::System::Globalization::CultureInfo __declspec(property(get=get_InvariantCulture))  InvariantCulture;

static ::System::Globalization::CultureInfo __declspec(property(get=get_CurrentCulture))  CurrentCulture;

static ::System::Globalization::CultureInfo __declspec(property(get=get_CurrentUICulture))  CurrentUICulture;

 ::StringW __declspec(property(get=get_Territory))  Territory;

 ::StringW __declspec(property(get=get__name))  _name;

 int32_t __declspec(property(get=get_LCID))  LCID;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Globalization::Calendar __declspec(property(get=get_Calendar))  Calendar;

 ::System::Globalization::CultureInfo __declspec(property(get=get_Parent))  Parent;

 ::System::Globalization::TextInfo __declspec(property(get=get_TextInfo))  TextInfo;

 ::System::Globalization::CompareInfo __declspec(property(get=get_CompareInfo))  CompareInfo;

 bool __declspec(property(get=get_IsNeutralCulture))  IsNeutralCulture;

 ::System::Globalization::NumberFormatInfo __declspec(property(get=get_NumberFormat, put=set_NumberFormat))  NumberFormat;

 ::System::Globalization::DateTimeFormatInfo __declspec(property(get=get_DateTimeFormat, put=set_DateTimeFormat))  DateTimeFormat;

 ::StringW __declspec(property(get=get_EnglishName))  EnglishName;

 int32_t __declspec(property(get=get_CalendarType))  CalendarType;

static ::System::Globalization::CultureInfo __declspec(property(get=get_DefaultThreadCurrentCulture, put=set_DefaultThreadCurrentCulture))  DefaultThreadCurrentCulture;

static ::System::Globalization::CultureInfo __declspec(property(get=get_DefaultThreadCurrentUICulture))  DefaultThreadCurrentUICulture;

 ::StringW __declspec(property(get=get_SortName))  SortName;

static ::System::Globalization::CultureInfo __declspec(property(get=get_UserDefaultUICulture))  UserDefaultUICulture;

static ::System::Globalization::CultureInfo __declspec(property(get=get_UserDefaultCulture))  UserDefaultCulture;


// Methods

/// @brief Method get__cultureData addr 0x24042d8 size 0x8 virtual false final false
 ::System::Globalization::CultureData get__cultureData() ;

/// @brief Method get__isInherited addr 0x24042e0 size 0x8 virtual false final false
 bool get__isInherited() ;

/// @brief Method get_InvariantCulture addr 0x23f5334 size 0x60 virtual false final false
static ::System::Globalization::CultureInfo get_InvariantCulture() ;

/// @brief Method get_CurrentCulture addr 0x23f55b8 size 0x20 virtual false final false
static ::System::Globalization::CultureInfo get_CurrentCulture() ;

/// @brief Method get_CurrentUICulture addr 0x24042e8 size 0x20 virtual false final false
static ::System::Globalization::CultureInfo get_CurrentUICulture() ;

/// @brief Method ConstructCurrentCulture addr 0x2404308 size 0x1e4 virtual false final false
static ::System::Globalization::CultureInfo ConstructCurrentCulture() ;

/// @brief Method ConstructCurrentUICulture addr 0x240470c size 0x4c virtual false final false
static ::System::Globalization::CultureInfo ConstructCurrentUICulture() ;

/// @brief Method get_Territory addr 0x2404758 size 0x8 virtual false final false
 ::StringW get_Territory() ;

/// @brief Method get__name addr 0x2404760 size 0x8 virtual false final false
 ::StringW get__name() ;

/// @brief Method get_LCID addr 0x2404768 size 0x8 virtual true final false
 int32_t get_LCID() ;

/// @brief Method get_Name addr 0x2404770 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Calendar addr 0x2404778 size 0x84 virtual true final false
 ::System::Globalization::Calendar get_Calendar() ;

/// @brief Method get_Parent addr 0x2404a54 size 0x23c virtual true final false
 ::System::Globalization::CultureInfo get_Parent() ;

/// @brief Method get_TextInfo addr 0x2404c9c size 0x11c virtual true final false
 ::System::Globalization::TextInfo get_TextInfo() ;

/// @brief Method Clone addr 0x2404e30 size 0x198 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Equals addr 0x2404fc8 size 0xac virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetCultures addr 0x2405074 size 0x230 virtual false final false
static ::ArrayW<::System::Globalization::CultureInfo> GetCultures(::System::Globalization::CultureTypes types) ;

/// @brief Method GetTextInfoData addr 0x24052b4 size 0x18 virtual false final false
 ::System::Globalization::____System__Globalization__CultureInfo__Data GetTextInfoData() ;

/// @brief Method GetHashCode addr 0x2405344 size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2405350 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_CompareInfo addr 0x2405358 size 0x158 virtual true final false
 ::System::Globalization::CompareInfo get_CompareInfo() ;

/// @brief Method get_IsNeutralCulture addr 0x24054b0 size 0x48 virtual true final false
 bool get_IsNeutralCulture() ;

/// @brief Method CheckNeutral addr 0x24054f8 size 0x4 virtual false final false
 void CheckNeutral() ;

/// @brief Method get_NumberFormat addr 0x24054fc size 0x8c virtual true final false
 ::System::Globalization::NumberFormatInfo get_NumberFormat() ;

/// @brief Method set_NumberFormat addr 0x2405588 size 0xd0 virtual true final false
 void set_NumberFormat(::System::Globalization::NumberFormatInfo value) ;

/// @brief Method get_DateTimeFormat addr 0x2405658 size 0x160 virtual true final false
 ::System::Globalization::DateTimeFormatInfo get_DateTimeFormat() ;

/// @brief Method set_DateTimeFormat addr 0x24057b8 size 0xd0 virtual true final false
 void set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo value) ;

/// @brief Method get_EnglishName addr 0x2405888 size 0x30 virtual true final false
 ::StringW get_EnglishName() ;

/// @brief Method GetFormat addr 0x24058b8 size 0x110 virtual true final false
 ::bs_hook::Il2CppWrapperType GetFormat(::System::Type formatType) ;

/// @brief Method Construct addr 0x24047fc size 0x20 virtual false final false
 void Construct() ;

/// @brief Method construct_internal_locale_from_lcid addr 0x24059c8 size 0x4 virtual false final false
 bool construct_internal_locale_from_lcid(int32_t lcid) ;

/// @brief Method construct_internal_locale_from_name addr 0x24059cc size 0x4 virtual false final false
 bool construct_internal_locale_from_name(::StringW name) ;

/// @brief Method get_current_locale_name addr 0x24044ec size 0x4 virtual false final false
static ::StringW get_current_locale_name() ;

/// @brief Method internal_get_cultures addr 0x24052a4 size 0x10 virtual false final false
static ::ArrayW<::System::Globalization::CultureInfo> internal_get_cultures(bool neutral, bool specific, bool installed) ;

/// @brief Method ConstructInvariant addr 0x24059d0 size 0x14c virtual false final false
 void ConstructInvariant(bool read_only) ;

/// @brief Method CreateTextInfo addr 0x2404db8 size 0x78 virtual false final false
 ::System::Globalization::TextInfo CreateTextInfo(bool readOnly) ;

// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }]
explicit CultureInfo(int32_t culture) ;

/// @brief Method .ctor addr 0x2404c90 size 0xc virtual false final false
 void _ctor(int32_t culture) ;

// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }]
explicit CultureInfo(int32_t culture, bool useUserOverride) ;

/// @brief Method .ctor addr 0x2405b1c size 0xc virtual false final false
 void _ctor(int32_t culture, bool useUserOverride) ;

// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "read_only", ty: "bool", modifiers: "", def_value: None }]
explicit CultureInfo(int32_t culture, bool useUserOverride, bool read_only) ;

/// @brief Method .ctor addr 0x2405b28 size 0x260 virtual false final false
 void _ctor(int32_t culture, bool useUserOverride, bool read_only) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit CultureInfo(::StringW name) ;

/// @brief Method .ctor addr 0x23f6b98 size 0xc virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }]
explicit CultureInfo(::StringW name, bool useUserOverride) ;

/// @brief Method .ctor addr 0x23fd114 size 0xc virtual false final false
 void _ctor(::StringW name, bool useUserOverride) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useUserOverride", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "read_only", ty: "bool", modifiers: "", def_value: None }]
explicit CultureInfo(::StringW name, bool useUserOverride, bool read_only) ;

/// @brief Method .ctor addr 0x2405d88 size 0x22c virtual false final false
 void _ctor(::StringW name, bool useUserOverride, bool read_only) ;

// Ctor Parameters []
explicit CultureInfo() ;

/// @brief Method .ctor addr 0x2406108 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method insert_into_shared_tables addr 0x2406128 size 0x188 virtual false final false
static void insert_into_shared_tables(::System::Globalization::CultureInfo c) ;

/// @brief Method GetCultureInfo addr 0x23f926c size 0x244 virtual false final false
static ::System::Globalization::CultureInfo GetCultureInfo(int32_t culture) ;

/// @brief Method GetCultureInfo addr 0x23f94b0 size 0x22c virtual false final false
static ::System::Globalization::CultureInfo GetCultureInfo(::StringW name) ;

/// @brief Method CreateCulture addr 0x24062b0 size 0x74 virtual false final false
static ::System::Globalization::CultureInfo CreateCulture(::StringW name, bool reference) ;

/// @brief Method CreateSpecificCulture addr 0x24044f0 size 0x21c virtual false final false
static ::System::Globalization::CultureInfo CreateSpecificCulture(::StringW name) ;

/// @brief Method ConstructLocaleFromName addr 0x2405fb4 size 0x8c virtual false final false
 bool ConstructLocaleFromName(::StringW name) ;

/// @brief Method CreateSpecificCultureFromNeutral addr 0x2406324 size 0x2754 virtual false final false
static ::System::Globalization::CultureInfo CreateSpecificCultureFromNeutral(::StringW name) ;

/// @brief Method get_CalendarType addr 0x24052cc size 0x78 virtual false final false
 int32_t get_CalendarType() ;

/// @brief Method CreateCalendar addr 0x240481c size 0x238 virtual false final false
static ::System::Globalization::Calendar CreateCalendar(int32_t calendarType) ;

/// @brief Method CreateNotFoundException addr 0x2406040 size 0xc8 virtual false final false
static ::System::Exception CreateNotFoundException(::StringW name) ;

/// @brief Method get_DefaultThreadCurrentCulture addr 0x2408a78 size 0x60 virtual false final false
static ::System::Globalization::CultureInfo get_DefaultThreadCurrentCulture() ;

/// @brief Method set_DefaultThreadCurrentCulture addr 0x2408ad8 size 0x60 virtual false final false
static void set_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo value) ;

/// @brief Method get_DefaultThreadCurrentUICulture addr 0x2408b38 size 0x60 virtual false final false
static ::System::Globalization::CultureInfo get_DefaultThreadCurrentUICulture() ;

/// @brief Method get_SortName addr 0x2408b98 size 0x8 virtual false final false
 ::StringW get_SortName() ;

/// @brief Method get_UserDefaultUICulture addr 0x2408ba0 size 0x4c virtual false final false
static ::System::Globalization::CultureInfo get_UserDefaultUICulture() ;

/// @brief Method get_UserDefaultCulture addr 0x2408bec size 0x4c virtual false final false
static ::System::Globalization::CultureInfo get_UserDefaultCulture() ;

/// @brief Method InitializeUserPreferredCultureInfoInAppX addr 0x2408c38 size 0x10 virtual false final false
static void InitializeUserPreferredCultureInfoInAppX(::System::Globalization::____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate onCultureInfoChangedInAppX) ;

/// @brief Method SetUserPreferredCultureInfoInAppX addr 0x2408c48 size 0x10 virtual false final false
static void SetUserPreferredCultureInfoInAppX(::StringW name) ;

/// @brief Method OnCultureInfoChangedInAppX addr 0x2404238 size 0xa0 virtual false final false
static void OnCultureInfoChangedInAppX(::StringW language) ;

/// @brief Method GetCultureInfoForUserPreferredLanguageInAppX addr 0x2408c58 size 0xe0 virtual false final false
static ::System::Globalization::CultureInfo GetCultureInfoForUserPreferredLanguageInAppX() ;

/// @brief Method SetCultureInfoForUserPreferredLanguageInAppX addr 0x2408d38 size 0x110 virtual false final false
static void SetCultureInfoForUserPreferredLanguageInAppX(::System::Globalization::CultureInfo cultureInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::CultureInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureInfo, "System.Globalization", "CultureInfo");
NEED_NO_BOX(::System::Globalization::____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::____System__Globalization__CultureInfo__OnCultureInfoChangedDelegate, "System.Globalization", "CultureInfo/OnCultureInfoChangedDelegate");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::____System__Globalization__CultureInfo__Data, "System.Globalization", "CultureInfo/Data");
