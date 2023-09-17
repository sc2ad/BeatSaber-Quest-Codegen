#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace UnityEngine::Yoga {
struct YogaLogLevel;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class Logger;
}
// Type: UnityEngine.Yoga::Logger
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15396))
// CS Name: UnityEngine.Yoga.Logger
class CORDL_TYPE Logger : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Logger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: " const&", def_value: None }]
constexpr Logger(Logger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
constexpr Logger(Logger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Logger(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Logger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Logger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Logger& operator=(Logger&& o) noexcept = default;
  constexpr Logger& operator=(Logger const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Logger(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d2e3a4 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d2e4d4 size 0x14 virtual true final false
 void Invoke(::UnityEngine::Yoga::YogaConfig config, ::UnityEngine::Yoga::YogaNode node, ::UnityEngine::Yoga::YogaLogLevel level, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Yoga::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Logger, "UnityEngine.Yoga", "Logger");
