#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class PackedPlayModeBuildLogs;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog;
}
// Type: ::RuntimeBuildLog
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14324))
// CS Name: PackedPlayModeBuildLogs::RuntimeBuildLog
struct CORDL_TYPE ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog(::UnityEngine::LogType Type, ::StringW Message) noexcept;


                    constexpr ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog(____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog const&) = default;
                    constexpr ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog(____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog&&) = default;
                    constexpr ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog& operator=(____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog& operator=(____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::LogType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::UnityEngine::LogType value) ;

constexpr ::UnityEngine::LogType __get_Type() const;

 ::StringW __declspec(property(get=__get_Message, put=__set_Message))  Message;

constexpr void __set_Message(::StringW value) ;

constexpr ::StringW __get_Message() const;


// Methods

/// @brief Method .ctor addr 0x287d688 size 0xc virtual false final false
 void _ctor(::UnityEngine::LogType type, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PackedPlayModeBuildLogs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14325))
// CS Name: PackedPlayModeBuildLogs
class CORDL_TYPE PackedPlayModeBuildLogs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RuntimeBuildLog = ::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PackedPlayModeBuildLogs() = default;

// Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: " const&", def_value: None }]
constexpr PackedPlayModeBuildLogs(PackedPlayModeBuildLogs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "&&", def_value: None }]
constexpr PackedPlayModeBuildLogs(PackedPlayModeBuildLogs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PackedPlayModeBuildLogs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PackedPlayModeBuildLogs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PackedPlayModeBuildLogs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PackedPlayModeBuildLogs& operator=(PackedPlayModeBuildLogs&& o) noexcept = default;
  constexpr PackedPlayModeBuildLogs& operator=(PackedPlayModeBuildLogs const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> __declspec(property(get=__get_m_RuntimeBuildLogs, put=__set_m_RuntimeBuildLogs))  m_RuntimeBuildLogs;

constexpr void __set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> __get_m_RuntimeBuildLogs() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> __declspec(property(get=get_RuntimeBuildLogs, put=set_RuntimeBuildLogs))  RuntimeBuildLogs;


// Methods

/// @brief Method get_RuntimeBuildLogs addr 0x287d5fc size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> get_RuntimeBuildLogs() ;

/// @brief Method set_RuntimeBuildLogs addr 0x287d604 size 0x8 virtual false final false
 void set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> value) ;

// Ctor Parameters []
explicit PackedPlayModeBuildLogs() ;

/// @brief Method .ctor addr 0x287d60c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PackedPlayModeBuildLogs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackedPlayModeBuildLogs, "", "PackedPlayModeBuildLogs");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog, "", "PackedPlayModeBuildLogs/RuntimeBuildLog");
