#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class ISonyPlatformManager;
}
// Type: ::ISonyPlatformManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4663))
// CS Name: ISonyPlatformManager
class CORDL_TYPE ISonyPlatformManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISonyPlatformManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISonyPlatformManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 uint64_t __declspec(property(get=get_userAccountId))  userAccountId;

 int32_t __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 System::Threading::Tasks::Task __declspec(property(get=get_initializationTask))  initializationTask;


// Methods

/// @brief Method get_userAccountId addr 0x0 size 0xffffffffffffffff virtual true final false
 uint64_t get_userAccountId() ;

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

/// @brief Method get_initializationTask addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task get_initializationTask() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISonyPlatformManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISonyPlatformManager, "", "ISonyPlatformManager");
