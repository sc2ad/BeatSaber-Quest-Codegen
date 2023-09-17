#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleFileLogger;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SimpleFileLogger__MonoLogger;
}
// Type: ::MonoLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13831))
// CS Name: SimpleFileLogger::MonoLogger
class CORDL_TYPE ____GlobalNamespace__SimpleFileLogger__MonoLogger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__SimpleFileLogger__MonoLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SimpleFileLogger__MonoLogger", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SimpleFileLogger__MonoLogger(____GlobalNamespace__SimpleFileLogger__MonoLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SimpleFileLogger__MonoLogger", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SimpleFileLogger__MonoLogger(____GlobalNamespace__SimpleFileLogger__MonoLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SimpleFileLogger__MonoLogger(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ____GlobalNamespace__SimpleFileLogger__MonoLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SimpleFileLogger__MonoLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SimpleFileLogger__MonoLogger& operator=(____GlobalNamespace__SimpleFileLogger__MonoLogger&& o) noexcept = default;
  constexpr ____GlobalNamespace__SimpleFileLogger__MonoLogger& operator=(____GlobalNamespace__SimpleFileLogger__MonoLogger const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__lines, put=__set__lines))  _lines;

constexpr void __set__lines(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__lines() const;


// Methods

/// @brief Method OnDestroy addr 0x1f7b504 size 0x4c virtual false final false
 void OnDestroy() ;

/// @brief Method Log addr 0x1f7b1c8 size 0xa8 virtual false final false
 void Log(::StringW text) ;

/// @brief Method Clear addr 0x1f7b124 size 0x84 virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit ____GlobalNamespace__SimpleFileLogger__MonoLogger() ;

/// @brief Method .ctor addr 0x1f7b550 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SimpleFileLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13832))
// CS Name: SimpleFileLogger
class CORDL_TYPE SimpleFileLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MonoLogger = ::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SimpleFileLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleFileLogger", modifiers: " const&", def_value: None }]
constexpr SimpleFileLogger(SimpleFileLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleFileLogger", modifiers: "&&", def_value: None }]
constexpr SimpleFileLogger(SimpleFileLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleFileLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleFileLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleFileLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleFileLogger& operator=(SimpleFileLogger&& o) noexcept = default;
  constexpr SimpleFileLogger& operator=(SimpleFileLogger const& o) noexcept = default;
                


// Fields

/// @brief Field kFilename offset 0
static constexpr ::ConstString  kFilename{u"SimpleLog.txt"};

static ::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger __declspec(property(get=__get__monoLogger, put=__set__monoLogger))  _monoLogger;

static void __set__monoLogger(::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger value) ;

static ::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger __get__monoLogger() ;


// Properties

static ::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger __declspec(property(get=get_monoLogger))  monoLogger;


// Methods

/// @brief Method get_monoLogger addr 0x1f7b010 size 0x114 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger get_monoLogger() ;

/// @brief Method Log addr 0x1f7b1a8 size 0x20 virtual false final false
static void Log(::StringW text) ;

/// @brief Method LogVector addr 0x1f7b270 size 0x274 virtual false final false
static void LogVector(::StringW description, ::UnityEngine::Vector3 vec) ;

/// @brief Method Clear addr 0x1f7b4e4 size 0x18 virtual false final false
static void Clear() ;

// Ctor Parameters []
explicit SimpleFileLogger() ;

/// @brief Method .ctor addr 0x1f7b4fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SimpleFileLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleFileLogger, "", "SimpleFileLogger");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SimpleFileLogger__MonoLogger, "", "SimpleFileLogger/MonoLogger");
