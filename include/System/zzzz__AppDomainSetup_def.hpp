#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class AppDomainSetup;
}
// Type: System::AppDomainSetup
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2581))
// CS Name: System.AppDomainSetup
class CORDL_TYPE AppDomainSetup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~AppDomainSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainSetup", modifiers: " const&", def_value: None }]
constexpr AppDomainSetup(AppDomainSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainSetup", modifiers: "&&", def_value: None }]
constexpr AppDomainSetup(AppDomainSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppDomainSetup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AppDomainSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppDomainSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppDomainSetup& operator=(AppDomainSetup&& o) noexcept = default;
  constexpr AppDomainSetup& operator=(AppDomainSetup const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_application_base, put=__set_application_base))  application_base;

constexpr void __set_application_base(::StringW value) ;

constexpr ::StringW __get_application_base() const;

 ::StringW __declspec(property(get=__get_application_name, put=__set_application_name))  application_name;

constexpr void __set_application_name(::StringW value) ;

constexpr ::StringW __get_application_name() const;

 ::StringW __declspec(property(get=__get_cache_path, put=__set_cache_path))  cache_path;

constexpr void __set_cache_path(::StringW value) ;

constexpr ::StringW __get_cache_path() const;

 ::StringW __declspec(property(get=__get_configuration_file, put=__set_configuration_file))  configuration_file;

constexpr void __set_configuration_file(::StringW value) ;

constexpr ::StringW __get_configuration_file() const;

 ::StringW __declspec(property(get=__get_dynamic_base, put=__set_dynamic_base))  dynamic_base;

constexpr void __set_dynamic_base(::StringW value) ;

constexpr ::StringW __get_dynamic_base() const;

 ::StringW __declspec(property(get=__get_license_file, put=__set_license_file))  license_file;

constexpr void __set_license_file(::StringW value) ;

constexpr ::StringW __get_license_file() const;

 ::StringW __declspec(property(get=__get_private_bin_path, put=__set_private_bin_path))  private_bin_path;

constexpr void __set_private_bin_path(::StringW value) ;

constexpr ::StringW __get_private_bin_path() const;

 ::StringW __declspec(property(get=__get_private_bin_path_probe, put=__set_private_bin_path_probe))  private_bin_path_probe;

constexpr void __set_private_bin_path_probe(::StringW value) ;

constexpr ::StringW __get_private_bin_path_probe() const;

 ::StringW __declspec(property(get=__get_shadow_copy_directories, put=__set_shadow_copy_directories))  shadow_copy_directories;

constexpr void __set_shadow_copy_directories(::StringW value) ;

constexpr ::StringW __get_shadow_copy_directories() const;

 ::StringW __declspec(property(get=__get_shadow_copy_files, put=__set_shadow_copy_files))  shadow_copy_files;

constexpr void __set_shadow_copy_files(::StringW value) ;

constexpr ::StringW __get_shadow_copy_files() const;

 bool __declspec(property(get=__get_publisher_policy, put=__set_publisher_policy))  publisher_policy;

constexpr void __set_publisher_policy(bool value) ;

constexpr bool __get_publisher_policy() const;

 bool __declspec(property(get=__get_path_changed, put=__set_path_changed))  path_changed;

constexpr void __set_path_changed(bool value) ;

constexpr bool __get_path_changed() const;

 int32_t __declspec(property(get=__get_loader_optimization, put=__set_loader_optimization))  loader_optimization;

constexpr void __set_loader_optimization(int32_t value) ;

constexpr int32_t __get_loader_optimization() const;

 bool __declspec(property(get=__get_disallow_binding_redirects, put=__set_disallow_binding_redirects))  disallow_binding_redirects;

constexpr void __set_disallow_binding_redirects(bool value) ;

constexpr bool __get_disallow_binding_redirects() const;

 bool __declspec(property(get=__get_disallow_code_downloads, put=__set_disallow_code_downloads))  disallow_code_downloads;

constexpr void __set_disallow_code_downloads(bool value) ;

constexpr bool __get_disallow_code_downloads() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__activationArguments, put=__set__activationArguments))  _activationArguments;

constexpr void __set__activationArguments(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__activationArguments() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_domain_initializer, put=__set_domain_initializer))  domain_initializer;

constexpr void __set_domain_initializer(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_domain_initializer() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_application_trust, put=__set_application_trust))  application_trust;

constexpr void __set_application_trust(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_application_trust() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_domain_initializer_args, put=__set_domain_initializer_args))  domain_initializer_args;

constexpr void __set_domain_initializer_args(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_domain_initializer_args() const;

 bool __declspec(property(get=__get_disallow_appbase_probe, put=__set_disallow_appbase_probe))  disallow_appbase_probe;

constexpr void __set_disallow_appbase_probe(bool value) ;

constexpr bool __get_disallow_appbase_probe() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_configuration_bytes, put=__set_configuration_bytes))  configuration_bytes;

constexpr void __set_configuration_bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_configuration_bytes() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serialized_non_primitives, put=__set_serialized_non_primitives))  serialized_non_primitives;

constexpr void __set_serialized_non_primitives(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serialized_non_primitives() const;

 ::StringW __declspec(property(get=__get_manager_assembly, put=__set_manager_assembly))  manager_assembly;

constexpr void __set_manager_assembly(::StringW value) ;

constexpr ::StringW __get_manager_assembly() const;

 ::StringW __declspec(property(get=__get_manager_type, put=__set_manager_type))  manager_type;

constexpr void __set_manager_type(::StringW value) ;

constexpr ::StringW __get_manager_type() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_partial_visible_assemblies, put=__set_partial_visible_assemblies))  partial_visible_assemblies;

constexpr void __set_partial_visible_assemblies(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_partial_visible_assemblies() const;

 ::StringW __declspec(property(get=__get__TargetFrameworkName_k__BackingField, put=__set__TargetFrameworkName_k__BackingField))  _TargetFrameworkName_k__BackingField;

constexpr void __set__TargetFrameworkName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TargetFrameworkName_k__BackingField() const;


// Methods

static System::AppDomainSetup New_ctor() ;

/// @brief Method .ctor addr 0x2487e8c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AppDomainSetup);
DEFINE_IL2CPP_ARG_TYPE(System::AppDomainSetup, "System", "AppDomainSetup");
