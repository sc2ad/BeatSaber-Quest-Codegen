#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Polyglot {
class Polyglot__GoogleDownload___DownloadSheet_d__0;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Polyglot {
class GoogleDownload;
}
namespace Polyglot {
class Polyglot__GoogleDownload___DownloadSheet_d__0;
}
// Type: ::<DownloadSheet>d__0
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15526))
// CS Name: Polyglot.GoogleDownload::<DownloadSheet>d__0
class CORDL_TYPE Polyglot__GoogleDownload___DownloadSheet_d__0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Polyglot__GoogleDownload___DownloadSheet_d__0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Polyglot__GoogleDownload___DownloadSheet_d__0", modifiers: " const&", def_value: None }]
constexpr Polyglot__GoogleDownload___DownloadSheet_d__0(Polyglot__GoogleDownload___DownloadSheet_d__0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Polyglot__GoogleDownload___DownloadSheet_d__0", modifiers: "&&", def_value: None }]
constexpr Polyglot__GoogleDownload___DownloadSheet_d__0(Polyglot__GoogleDownload___DownloadSheet_d__0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Polyglot__GoogleDownload___DownloadSheet_d__0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Polyglot__GoogleDownload___DownloadSheet_d__0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Polyglot__GoogleDownload___DownloadSheet_d__0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Polyglot__GoogleDownload___DownloadSheet_d__0& operator=(Polyglot__GoogleDownload___DownloadSheet_d__0&& o) noexcept = default;
  constexpr Polyglot__GoogleDownload___DownloadSheet_d__0& operator=(Polyglot__GoogleDownload___DownloadSheet_d__0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 System::Func_2<float_t,bool> __declspec(property(get=__get_progressbar, put=__set_progressbar))  progressbar;

constexpr void __set_progressbar(System::Func_2<float_t,bool> value) ;

constexpr System::Func_2<float_t,bool> __get_progressbar() const;

 System::Action_1<::StringW> __declspec(property(get=__get_done, put=__set_done))  done;

constexpr void __set_done(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_done() const;

 ::StringW __declspec(property(get=__get_docsId, put=__set_docsId))  docsId;

constexpr void __set_docsId(::StringW value) ;

constexpr ::StringW __get_docsId() const;

 ::StringW __declspec(property(get=__get_sheetId, put=__set_sheetId))  sheetId;

constexpr void __set_sheetId(::StringW value) ;

constexpr ::StringW __get_sheetId() const;

 Polyglot::GoogleDriveDownloadFormat __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(Polyglot::GoogleDriveDownloadFormat value) ;

constexpr Polyglot::GoogleDriveDownloadFormat __get_format() const;

 ::StringW __declspec(property(get=__get__url_5__2, put=__set__url_5__2))  _url_5__2;

constexpr void __set__url_5__2(::StringW value) ;

constexpr ::StringW __get__url_5__2() const;

 UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__www_5__3, put=__set__www_5__3))  _www_5__3;

constexpr void __set__www_5__3(UnityEngine::Networking::UnityWebRequest value) ;

constexpr UnityEngine::Networking::UnityWebRequest __get__www_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Polyglot::Polyglot__GoogleDownload___DownloadSheet_d__0 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2670494 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26704bc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26704c0 size 0x300 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x26707c0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26707c8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2670808 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
// Type: Polyglot::GoogleDownload
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15527))
// CS Name: Polyglot.GoogleDownload
class CORDL_TYPE GoogleDownload : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _DownloadSheet_d__0 = Polyglot::Polyglot__GoogleDownload___DownloadSheet_d__0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GoogleDownload() = default;

// Ctor Parameters [CppParam { name: "", ty: "GoogleDownload", modifiers: " const&", def_value: None }]
constexpr GoogleDownload(GoogleDownload const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GoogleDownload", modifiers: "&&", def_value: None }]
constexpr GoogleDownload(GoogleDownload&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GoogleDownload(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GoogleDownload& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GoogleDownload& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GoogleDownload& operator=(GoogleDownload&& o) noexcept = default;
  constexpr GoogleDownload& operator=(GoogleDownload const& o) noexcept = default;
                


// Methods

/// @brief Method DownloadSheet addr 0x2670404 size 0x90 virtual false final false
static System::Collections::IEnumerator DownloadSheet(::StringW docsId, ::StringW sheetId, System::Action_1<::StringW> done, Polyglot::GoogleDriveDownloadFormat format, System::Func_2<float_t,bool> progressbar) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::GoogleDownload);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDownload, "Polyglot", "GoogleDownload");
NEED_NO_BOX(Polyglot::Polyglot__GoogleDownload___DownloadSheet_d__0);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Polyglot__GoogleDownload___DownloadSheet_d__0, "Polyglot", "GoogleDownload/<DownloadSheet>d__0");
